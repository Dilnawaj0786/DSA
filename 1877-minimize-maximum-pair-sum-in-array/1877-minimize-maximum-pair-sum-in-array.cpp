class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxsum = INT_MIN;
        int st =0;
        int end = nums.size()-1;
        while(st < end){
            maxsum = max(maxsum,(nums[st++]+nums[end--]));
        }
        return maxsum;
    }
};