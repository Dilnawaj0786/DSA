class Solution {
public:
    int compress(vector<char>& s) {
        string ans = "";
        int i=0;
        int j=0;
        int n = s.size();
        while(j < n){
            if(s[i] == s[j]) j++;
            else{
                int length = j-i;
                ans.push_back(s[i]);
                if(length != 1){
                    ans += to_string(length);
                }
                 i = j;
            }
        }
        int length = j-i;
        ans.push_back(s[i]);
        if(length != 1){
            ans += to_string(length);
        }

        vector<char> ans2(ans.length());
        for(int i=0;i<ans.length();i++){
            ans2[i] = ans[i];
        }
        s = ans2;
        return s.size();
    }
};