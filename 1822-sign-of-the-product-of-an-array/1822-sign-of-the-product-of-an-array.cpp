class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        int zeros = 0;
        for(int ele : nums){
            if(ele < 0) neg++;
            if(ele == 0) zeros++;
        }
        if(zeros != 0) return 0;
        return (neg % 2 == 0 && zeros == 0) ? 1 : -1;
    }
};