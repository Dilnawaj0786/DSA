class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n,0);
        stack<int> st;
        int j = n-1;
        while(j >= 0){
            while(st.size() > 0 && prices[j] < st.top()) st.pop();
            ans[j] = (st.size() != 0) ? (prices[j]-st.top()) : prices[j];
            st.push(prices[j]);
            j--;
        }
        return ans;
    }
};