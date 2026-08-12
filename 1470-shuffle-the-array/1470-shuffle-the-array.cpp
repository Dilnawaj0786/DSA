class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        ans[0] = nums[0];
        int i= 1;
        int j = n;
        int k = 1;
        while( i<n && j < 2*n-1){
            ans[k++] = nums[j++];
            ans[k++] = nums[i++];
        }
        ans[2*n-1] = nums[nums.size()-1];
        return ans;

    }
};