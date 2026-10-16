class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int j= n-1;j>= 0;j--) st.push(nums[j]);

        int j = n-1;
        while(j >= 0){
            while(st.size() > 0 && nums[j] >= st.top()) st.pop();
            ans[j] = (st.size() != 0) ? st.top() : -1;
            st.push(nums[j]);
            j--;
        }
        return ans;
    }
};