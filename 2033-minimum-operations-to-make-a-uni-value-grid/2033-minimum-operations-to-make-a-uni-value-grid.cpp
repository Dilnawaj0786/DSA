class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int rem = grid[0][0] % x;
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] % x != rem) return -1;
                else{
                    ans.push_back(grid[i][j]);
                }
            }
        }
        int n = ans.size();
        sort(ans.begin(), ans.end());
        int median = ans[n/2];
        int op = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                // if(grid[i][j] < median){
                //     while(grid[i][j] != median){
                //         grid[i][j] += x;
                //         op++;
                //     }
                // }else{
                //     while(grid[i][j] != median){
                //         grid[i][j] -= x;
                //         op++;
                //     }
                // }

                op += abs(grid[i][j] - median) / x;
                
            }
        }
        return op;

        
    }
};