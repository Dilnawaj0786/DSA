class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int ele : nums){
            sum += ele;
        }
        int pivot = -1;
        int left = 0;


        for(int i=0;i<nums.size();i++){
            int right = sum - nums[i]-left;

            if(right == left ){
                pivot = i;
                return pivot;
            }
            left += nums[i];
        }
        return pivot;
    }
};