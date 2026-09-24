class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int sum = 0;
            while(x != 0){
                sum += (x % 10);
                x /= 10;
            }
            if(sum == i){
                ans = min(ans,i);
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};