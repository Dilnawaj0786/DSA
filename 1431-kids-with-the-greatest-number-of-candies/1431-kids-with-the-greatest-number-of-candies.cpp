class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        int max_can = 0;
        for(int ele : candies){
            if(ele > max_can) max_can = ele;
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= max_can){
                ans[i] = true;
            }
        }
        return ans;
    }
};