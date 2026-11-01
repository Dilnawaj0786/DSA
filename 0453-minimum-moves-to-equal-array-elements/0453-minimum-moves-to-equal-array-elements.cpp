class Solution {
public:
    int minMoves(vector<int>& nums) {
        int k =0;
        int minimum = nums[0];
        for(int ele : nums){
            if(ele < minimum) minimum = ele;
        }

        for(int i=0;i<nums.size();i++){
            k += (nums[i]-minimum);
        }
        return k;
    }
};