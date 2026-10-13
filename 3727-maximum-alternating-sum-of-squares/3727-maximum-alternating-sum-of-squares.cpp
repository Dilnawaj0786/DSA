class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0) nums[i] = -nums[i];
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j = nums.size()-1;
        long long sum = 0;
        while(i<=j){
            if(i==j){
                sum +=( nums[j] * nums[j--]);
            }
            else{
                sum +=( nums[j] * nums[j--]);
                sum -=( nums[i] * nums[i++]);
            }
        }
        return sum;
    }
};