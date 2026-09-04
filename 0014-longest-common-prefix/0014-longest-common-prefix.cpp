class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            string prefix = ans;
            string current = strs[i];
            string newstr = "";
            int j=0;
            int k=0;

            while(j < prefix.size() && k < current.size()){
                if(prefix[j] == current[k]){
                    newstr.push_back(prefix[j]);
                }else{
                    break;
                }
                j++;
                k++;
            }

            if(newstr.empty()){
                return "";
            }

            ans = newstr;
        }
        return ans;
    }
};