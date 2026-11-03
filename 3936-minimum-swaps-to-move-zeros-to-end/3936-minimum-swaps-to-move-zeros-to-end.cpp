class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int swaps = 0;
        int i=0;
        int j = nums.size()-1;
        while(i <= j){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i],nums[j]);
                swaps++;
                i++;
                j--;
            }else if(nums[i] != 0) i++;
            else j--;
        }
        return swaps;
    }
};