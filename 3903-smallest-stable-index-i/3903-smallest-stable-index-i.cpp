class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size()-1;
        int i=0;

        int max_e = INT_MIN;
        while(i <= n){
            int j = i;
            int min_e = INT_MAX;
            while(j <= n){
                min_e = min(min_e,nums[j]);
                j++;
            }
            max_e = max(max_e,nums[i]);
            if(max_e - min_e  <= k){
                return i;
            }
            i++;
        }
        return -1;
    }
};