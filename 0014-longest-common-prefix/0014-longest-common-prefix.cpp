class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            string pre = ans;
            string temp = strs[i];
            int j =0;
            int k = 0;
            string newans = "";
            while(j < temp.size() && k < pre.size()){
                if(temp[j] == pre[k]){
                    newans.push_back(temp[j]);
                }else{
                    break;
                }
                j++;
                k++;
            }
            if(newans.empty()){
                return "";
            }
            ans = newans;
        }
        return ans;
    }
};