class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int count = 1;
        char ch = s[0];
        ans.push_back(ch);
        for(int i=1;i<s.size();i++){
            if(s[i] != ch){
                ans.push_back(s[i]);
                ch = s[i];
                count = 1;
            }
            else if(s[i] == ch && count < 2){
                ans.push_back(s[i]);
                count++;
            } 
        }
        return ans;
    }
};