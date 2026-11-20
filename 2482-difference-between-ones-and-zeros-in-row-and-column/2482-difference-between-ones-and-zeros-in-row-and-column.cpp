class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rows0;
        vector<int> rows1;
        vector<int> col0;
        vector<int> col1;
        for(int i=0;i<grid.size();i++){
            int zeros =0;
            int ones = 0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 0) zeros++;
                else ones++;
            }
            rows0.push_back(zeros);
            rows1.push_back(ones);
        }

        for(int i=0;i<grid[0].size();i++){
            int zeros =0;
            int ones = 0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i] == 0) zeros++;
                else ones++;
            }
            col0.push_back(zeros);
            col1.push_back(ones);
        }
        // int n = grid.size();
        // vector<vector<int
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j] = rows1[i] + col1[j] - (rows0[i] + col0[j]);
            }
        }
        return grid;
    }
};