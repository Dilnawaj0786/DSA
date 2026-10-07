class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;
        for(int ele : nums){
            if(ele % 3 != 0) operations++;
        }
        return operations;
    }
};