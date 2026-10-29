class Solution {  
public:
    int dominantIndex(vector<int>& nums) {
        int maxe = -1;
        for(int ele : nums){
           maxe = max(maxe,ele);
        }
        int idx = -1;
        bool flag = true; 
        for(int i=0;i<nums.size();i++){
            if(nums[i] == maxe){
                idx = i;
                continue;
            } 
            int x = nums[i]*2;
            if(x > maxe) flag = false;
        }
        return (flag) ? idx : -1; 
    }

};