class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int max = INT16_MIN;
        for(int ele : nums) (ele > max) ? max = ele : max = max;
        vector<int> freq(max+1,0);
        for(int ele : nums) freq[ele]++;
        int k =0;
        for(int i=0;i<freq.size();i++){
            if(freq[i] > 1){
                nums[k++] = i;
            }
        }
        nums.resize(k);
        return nums;
    }
};