class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max_ele = INT_MIN;
        for(int ele : nums) if(ele > max_ele) max_ele = ele;
        int sum = 0;
        for(int i=1;i<= k;i++) sum += max_ele++;
        return sum;
    }
};