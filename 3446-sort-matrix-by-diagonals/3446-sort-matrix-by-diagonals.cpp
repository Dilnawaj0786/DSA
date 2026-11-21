class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> lowertriangle;
        for(int i=0;i<n;i++){
            lowertriangle.push_back({});
        }
        for(int i=0;i<n;i++){
            for(int j =0;j<=i;j++){
                int x = abs(i-j);
                lowertriangle[x].push_back(grid[i][j]);
            }
        }
        for(int i=0;i<lowertriangle.size();i++){
            sort(lowertriangle[i].begin(),lowertriangle[i].end());
            reverse(lowertriangle[i].begin(),lowertriangle[i].end());
        }
        vector<vector<int>> uppertriangle; // primary diagonal not included
        for(int i=0;i<n-1;i++){
            uppertriangle.push_back({});
        }
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                int x = abs(j-i-1);
                uppertriangle[x].push_back(grid[i][j]);
            }
        }
        for(int i=0;i<uppertriangle.size();i++){
            sort(uppertriangle[i].begin(),uppertriangle[i].end());
        }

        for(int i=0;i<lowertriangle.size();i++){
            for(int j=0;j<=i;j++){
                int x = i - j;
                grid[i][j] = lowertriangle[x].front();
                lowertriangle[x].erase(lowertriangle[x].begin());
            }
        }

        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
               int x = j-i-1;
                grid[i][j] = uppertriangle[x].front();
                uppertriangle[x].erase(uppertriangle[x].begin());
            }
        }
        return grid;
    }
};