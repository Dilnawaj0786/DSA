class Solution {
public:
    void rverse(string &s , int i,int j){
        reverse(s.begin()+i,s.begin()+j);
    }
    string reverseWords(string s) {
        int i=0;
        int j = 0;

        string ans = "";
        bool flag = false;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                ans.push_back(s[i]);
                flag = false;
            }else{
                if(!ans.empty()){
                    flag = true;
                }
            }

            if(flag && i+1 < s.size() && s[i+1] != ' '){
                ans.push_back(' ');
                flag = false;
            }
        }
         int n = ans.size();
        while(j < n){
            if(ans[j] != ' ') j++;
            else{
                rverse(ans,i,j);
                i = j;
                while(i < ans.size() && ans[i] == ' '){
                    i++;
                    j++;
                }
            }
        }
        rverse(ans,i,j);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};