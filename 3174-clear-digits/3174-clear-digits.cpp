class Solution {
public:
    bool isvalid(char ch){
        return (ch >= 48 && ch <= 58) ? true : false;
    } 
    string clearDigits(string s) {
        string ans = "";
        stack<char> x;
        for(int i=0;i<s.size();i++){
            if(!isvalid(s[i])) x.push(s[i]);
            else x.pop();
        }

        while(x.size() > 0){
            ans.push_back(x.top());
            x.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};