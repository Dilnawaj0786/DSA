class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0;
        int pair = 0;
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j] == nums[j+1]){
                count++;
                pair += count;
            }else{
                count = 0;
            }
            
        }
        return pair;
    }
};