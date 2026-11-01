class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int op = 0;
        while(k > 0){
            int idx = 0;
            int ele = INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i] < ele){
                    ele = nums[i];
                    idx = i;
                }
            }
            nums[idx] *= multiplier;
            k--;
        }
        return nums;
    }
};