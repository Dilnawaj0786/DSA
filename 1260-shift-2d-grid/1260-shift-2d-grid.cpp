class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k > 0){
            vector<int> last;
            int m = grid.size()-1;
            int n = grid[0].size()-1;

            for(int i=0;i<=m;i++){
                last.push_back(grid[i][n]);
            }

            for(int i=0;i<=m;i++){
                for(int j=n;j>0;j--){
                    grid[i][j] = grid[i][j-1];
                }
            }

            grid[0][0] = last[m];

            for(int i = 1; i < grid.size(); i++){
                grid[i][0] = last[i-1];
            }
            k--;
        }
        return grid;
    }
};