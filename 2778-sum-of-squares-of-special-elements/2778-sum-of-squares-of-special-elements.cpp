class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int x = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums.size() % (i+1) == 0) nums[0] += (nums[i] * nums[i]);
        }
        return nums[0]-x;
    }
};