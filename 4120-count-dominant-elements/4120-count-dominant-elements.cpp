class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int dominant = 0;
        if(nums.size() == 1) return 1;
        if(nums[0] >= nums[1]) dominant++;
        if(nums[nums.size()-1] >= nums[nums.size()-2]) dominant++;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] >= (nums[i-1] + nums[i+1])/2.0 ) dominant++;
        }
        return dominant;
    }
};