class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        int n = mat.size();
        vector<int> freq(n,0);
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1) count++;
                if(mat[i][j] == 0) break;
            }
            freq[i] = count;
        }

        while(k > 0){
            int large = INT_MAX;
            int idx = -1;
            for(int i=0;i<freq.size();i++){
                if(freq[i] < large){
                    large = freq[i];
                    idx = i;
                }
            }
            ans.push_back(idx);
            freq[idx] = INT_MAX;
            k--;
        }
        return ans;
    }
};