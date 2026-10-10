class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m,vector<int>(n,0));
        int y = original.size();
        if(y != m*n) return{};
        int k =0;
        int j = 0;
        for(int i=0;i<original.size();i++){
            if( k<m && j<n){
                ans[k][j] = original[i];
                j++;
            }
            if(j >= n){
                k++;
                j=0;
                
            }
        }
        return ans;
    }
};