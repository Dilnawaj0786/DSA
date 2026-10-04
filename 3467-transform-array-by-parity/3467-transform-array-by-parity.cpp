class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }
        int i =0;
        int k =0;
        while(k < nums.size()){
            if(nums[k] != 1){
                swap(nums[i],nums[k]);
                i++;
            }
            k++;
        }
        return nums;
    }
};