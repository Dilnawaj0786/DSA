class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> used(strs.size(), false);
        vector<string> sorted(strs.size());

        for(int i = 0; i < strs.size(); i++) {
            sorted[i] = strs[i];
            sort(sorted[i].begin(), sorted[i].end());
        }

        for(int i=0;i<strs.size();i++){
            vector<string> newa;
            if(used[i]) continue;
            newa.push_back(strs[i]);
            used[i] = true;

            for(int j=i+1;j<strs.size();j++){
                if(used[j]) continue; 
                if(sorted[i] == sorted[j]){
                    newa.push_back(strs[j]);
                    used[j] = true; 
                }
            }
            ans.push_back(newa);
        }
       return ans;
    }
};