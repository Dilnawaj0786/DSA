class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int arraysum = 0;
        for(int ele : nums) arraysum += ele;
        return arraysum % k;
    }
};