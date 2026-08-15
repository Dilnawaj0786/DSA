class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> lucky;
        for(int i=0;i<n;i++){
            int idx = 0;
            int min_ele = INT_MAX;
            for(int j=0;j<m;j++){
                if(matrix[i][j] < min_ele){
                    min_ele = matrix[i][j];
                    idx = j;
                }
            }
            int max_ele = INT_MIN;
            for(int k=0;k<n;k++){
                if(matrix[k][idx] > max_ele){
                    max_ele = matrix[k][idx];
                }
            }

            if(max_ele == min_ele){
                lucky.push_back(max_ele);
            }
        }
        return lucky;
    }
};