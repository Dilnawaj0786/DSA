class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lenInc = 1;
        int lenDec = 1;
        for(int i=1;i<nums.size();i++){
            int lenA = 0;
            for(int j=i;j< nums.size();j++){// increasing part
                if(nums[j] <= nums[j-1]) break;
                lenA = max(j-(i-1)+1,lenA);
            }
            lenInc = max(lenA,lenInc);
            int lenB = 0;
            for(int j=i;j< nums.size();j++){// decreasing part
                if(nums[j] >= nums[j-1]) break;
                lenB = max(j-(i-1)+1,lenB);
            }
            lenDec = max(lenB,lenDec);
        }
        return max(lenInc,lenDec);
    }
};