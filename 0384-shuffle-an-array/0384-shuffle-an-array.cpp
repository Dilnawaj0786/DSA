class Solution {
private:
    vector<int> fixed;
public:
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            fixed.push_back(nums[i]);
        }
    }
    
    vector<int> reset() {
        return fixed;
    }
    
    vector<int> shuffle() {
        vector<int> ans = fixed;
        int n = ans.size();
        for(int i=n-1;i>=0;i--) {
            int j = rand()%(i+1);
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */