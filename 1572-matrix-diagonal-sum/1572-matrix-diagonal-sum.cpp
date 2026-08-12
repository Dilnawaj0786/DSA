class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary_sum = 0;
        int secondary_sum = 0;

        for(int i=0;i<mat.size();i++){
            primary_sum += mat[i][i];
            if(i != mat[i].size()-1-i){
                secondary_sum += mat[i][mat[i].size()-1-i];
            }
        }
        return ( primary_sum + secondary_sum);
    }
};