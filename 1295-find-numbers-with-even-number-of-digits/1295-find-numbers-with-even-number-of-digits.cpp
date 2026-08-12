class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int ele : nums){
            int digit = 0;
            while(ele != 0){
                ele /= 10;
                digit++;
            }
            if(digit %2 == 0){
                count++;
            }
        }
        return count;
    }
};