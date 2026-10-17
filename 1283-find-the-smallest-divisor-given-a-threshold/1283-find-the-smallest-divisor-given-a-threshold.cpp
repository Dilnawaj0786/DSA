class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int end = *max_element(nums.begin(), nums.end());
        int st = 1;
        int ans = end;
        while(st <= end){
            int mid = st + (end-st)/2;
            int sum = 0;
            for(int ele : nums) {
                sum += (ele + mid - 1) / mid;
            }
            if(sum <= threshold) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};