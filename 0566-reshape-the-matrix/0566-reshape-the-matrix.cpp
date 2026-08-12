class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if((row * col ) != (r * c)) return mat;
        vector<vector<int>> ans(r,vector<int>(c,0));
        vector<int> linear;
        for(int i = 0; i<row;i++){
            for(int j=0;j<col;j++){
                linear.push_back(mat[i][j]);
            }
        }
        int k = 0;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                ans[i][j] = linear[k++];
            }
        }
        return ans;
    }
};