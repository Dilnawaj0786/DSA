class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for(int i=0;i<m;i++){
            string x = "";
            for(int j=0;j<n;j++){
                if(i == 0 || j == n-1) x.push_back('.');
                else x.push_back('#');
            }
            ans.push_back(x);
        }
        return ans;
    }
};