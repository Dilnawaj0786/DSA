class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        // vector<int> leftsum;
        // vector<int> rightsum;
        // int sum =0;
        // leftsum.push_back(sum);
        // for(int i=0;i<nums.size()-1;i++){
        //     sum += nums[i];
        //     leftsum.push_back(sum);
        // }
        // sum += nums[nums.size()-1];
        // for(int i=0;i<nums.size();i++){
        //     rightsum.push_back(sum-nums[i]);
        //     sum -= nums[i];
        // }

        // for(int i=0;i<leftsum.size();i++) leftsum[i] = abs(leftsum[i]-rightsum[i]);
        // return leftsum;

        int sum = 0;
        for(int ele : nums) sum += ele;
        int x = 0;
        for(int i=0;i<nums.size();i++){
           int a = nums[i]; 
           sum -= a;         
           nums[i] = abs(sum - x);
           x += a;     
        }
        return nums;
    }
};