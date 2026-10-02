class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 3){
            if(nums[1] > nums[0] && nums[1] > nums[2]) return 1;
            if(nums[0] > nums[1] && nums[0] > nums[2]) return 0;
            return 2;
            
        }
        if(nums.size()==2){
            return (nums[0] < nums[1]) ? 1 : 0;
        }
        if(nums.size() == 1) return 0;
        int st =0;
        int end = nums.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid == 0){
                if(nums[mid] > nums[mid+1]) return mid;
                st = mid + 1;
            }
            else if(mid == nums.size()-1){
                if(nums[mid] > nums[mid-1]) return mid;
                end = mid - 1;
            }
            else{
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
                if(nums[mid] >= nums[mid+1]) end = mid-1;
                else st = mid+1;
            }
        }
        return 0;
    }
};