class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ngi(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 && nums[i] >= nums[st.top()]) st.pop();
            ngi[i] = (st.size() != 0) ? st.top() : -1;
            st.push(i);
        }
        vector<int> ans(n-k+1);
        int j = 0;
        for(int i=0;i<n-k+1;i++){
            if(j < i) j = i;
            while(ngi[j] != -1 && ngi[j] < i+k) {
                j = ngi[j];
            }
            ans[i] = nums[j];
        }
        return ans;
    }
};