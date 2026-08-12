class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int rows = arr.size();
        int column = arr[0].size();

        vector<vector<int>> ans(column,vector<int>(rows,0));
        for(int i=0;i<column;i++){
            for(int j=0;j<rows;j++){
                ans[i][j] = arr[j][i];
            }
        }
        return ans;
    }
};