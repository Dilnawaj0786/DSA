class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] == target) ans.push_back(i);
        // }
        // return ans;

        int x = 0;
        int y =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < target) x++;
            if(nums[i] == target) y++;
        }
        vector<int> ans;
        for(int i=x;i<x+y;i++){
            ans.push_back(i);
        }
        return ans;
    }
};