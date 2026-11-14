class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum = INT_MAX;
        bool exist = false;
        while(l<= r){
            for(int i=0;i<nums.size()-l+1;i++){
                int sum = 0;
                for(int j=i;j<i+l;j++){
                    sum += nums[j];
                }
                if(sum > 0){
                    exist = true;
                    minsum = min(minsum,sum);
                }
            }
            l++;
        }
        return (exist) ? minsum : -1;
    }
};