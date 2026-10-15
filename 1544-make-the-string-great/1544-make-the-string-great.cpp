class Solution {
public:
    void reverse(string& ans){
        int i=0;
        int j = ans.size()-1;
        while(i<=j) swap(ans[i++],ans[j--]);
    } 
    bool isvalid(char ch1, char ch2){
        int x = abs((int)(ch1) - (int)(ch2));
        if(x == 32) return true;
        return false;
    }
    string makeGood(string s) {
        stack<char> x;
        string ans = "";
        for(char ch : s){
            if(x.size() > 0 && isvalid(ch,x.top())){
                x.pop();
            }else{
                x.push(ch);
            }
        }

        while(x.size() > 0){
            ans.push_back(x.top());
            x.pop();
        }

        reverse(ans);
        return ans;

    }
};