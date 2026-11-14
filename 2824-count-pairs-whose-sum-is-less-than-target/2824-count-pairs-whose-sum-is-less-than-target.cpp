class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int pairs = 0;
        for(int i=0;i<nums.size()-1;i++){
            int sum =0;
            for(int j=i+1;j<nums.size();j++){
                sum = nums[i]+nums[j];
                if(sum < target) pairs++;
            }
        }
        return pairs;
    }
};