class Solution {
public:
    void reverse(string& x){
        int i=0;
        int j = x.size()-1;
        while(i<=j) swap(x[i++],x[j--]);
    }
    string minRemoveToMakeValid(string s) {
        int open = 0;
        int close = 0;
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i] != ')' && s[i] != '(') ans.push_back(s[i]);
            if(s[i] == '('){
                open++;
                ans.push_back('(');
            } 
            if(s[i] == ')'){
                close++;
                if(close <= open){
                    ans.push_back(')');
                }else{
                    close--;
                }
            } 
        }
        string news = "";
        int extra = open - close;
        for(int i = ans.size() - 1; i >= 0; i--) {
            if(ans[i] == '(' && extra > 0) {
                extra--;
            } else {
                news.push_back(ans[i]);
            }
        }
        reverse(news);
        return news;
    }
};