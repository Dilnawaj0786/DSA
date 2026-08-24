class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int ans = nums[0];
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] < ans){{
                end = mid-1;
                ans = nums[mid];
            }
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};