class Solution {
public:
    int getNumber(vector<int>& nums){
        int min_e = INT16_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] <min_e) min_e = nums[i];
        }
        return min_e;

    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum =0;
            while(nums[i] != 0){
                sum += nums[i] % 10;
                nums[i] /= 10;
            }
            nums[i] = sum;
        }

        return getNumber(nums);
    }
};