class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(2*n,0);
        for(int i=0;i<ans.size();i++){
            if(i < n){
                ans[i] = nums[i];
            }else{
                ans[i] = nums[abs(n-i)];
            }
        }
        return ans;
    }
};