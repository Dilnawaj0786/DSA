class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int ele : nums){
            int x = 0;
            while(ele != 0){
                if(ele % 10 == digit) x++;
                ele /= 10;
            }
            count += x;
        }
        return count;
    }
};