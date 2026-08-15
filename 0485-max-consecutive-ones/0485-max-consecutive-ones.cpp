class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0;
        int current = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                current++;
                ones = max(current,ones);
            }else{
                current = 0;
            }
        }
        return ones;
    }
};