class Solution {
public:
    string largestEven(string s) {
        int i;
        for(i = s.size()-1;i>=0;i--){
            if(int(s[i]) % 2 == 0) break;
        }
        string ans="";
        int j=0;
        if(i < 0) return ans;
        while(j <= i) ans.push_back(s[j++]);
        return ans;
    }
};