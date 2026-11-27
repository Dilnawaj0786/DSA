class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int j=piles.size()-1;
        int ans = 0;
        int i=0;
        while(i<j){
            i++;
            ans += piles[i++];
            j--;
        }
        return ans;
    }
};