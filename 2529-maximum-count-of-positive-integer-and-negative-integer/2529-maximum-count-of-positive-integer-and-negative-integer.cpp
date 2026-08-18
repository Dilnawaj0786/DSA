class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int st =0;
        int end = nums.size()-1;
        int neg = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] < 0){
                neg = mid;
                st = mid + 1;
            }else{
                end = mid-1;
            }
        }

        st =0;
        end = nums.size()-1;
        int pos = n;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] >0){
                pos = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        pos = n-pos;
        return(max(pos,++neg));
    }
};