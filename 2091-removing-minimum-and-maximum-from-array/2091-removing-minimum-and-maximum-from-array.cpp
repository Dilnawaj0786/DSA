class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_ele = INT_MAX;
        int max_ele = INT_MIN;
        int min_idx = -1;
        int max_idx = -1;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > max_ele){
                max_ele = nums[i];
                max_idx = i;
            }
            if(nums[i] < min_ele){
                min_ele = nums[i];
                min_idx = i;
            }
        }
        int left = max(min_idx, max_idx) + 1;
        int right = nums.size() - min(min_idx, max_idx);

        int l = min(min_idx, max_idx);
        int r = max(min_idx, max_idx);

        int mid = l + 1 + nums.size() - r;

        return min(min(left,right),mid);
    }
};