class Solution {
public:
    string sortSentence(string s) {
        int n = 1;
        for(char ch : s){
            if(ch == ' ') n++;
        }
        vector<string> x(n," ");
        string y = "";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                x[(s[i]-'0')-1] = y;
                y = "";
            }else if(s[i] != ' '){
                y.push_back(s[i]);
            }
        }

        string ans = "";
        for(int i=0;i<x.size();i++){
            ans += x[i];
            if(i != x.size()-1) ans.push_back(' ');
        }
        return ans;
    }
};