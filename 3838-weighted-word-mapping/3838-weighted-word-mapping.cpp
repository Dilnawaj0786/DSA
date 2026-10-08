class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string ans(n,' ');
        int k = 0;
        for(int i=0;i<words.size();i++){
            int j =0;
            int y =0;
            while(j<words[i].size()){
                int x = (words[i][j]-'a');
                y += weights[x];
                j++;
            }
            y = y % 26;
            y = 26-y;
            ans[k++] = char(y+96);
        }
        return ans;

    }
};