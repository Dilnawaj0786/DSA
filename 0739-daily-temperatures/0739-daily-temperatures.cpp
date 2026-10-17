class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& x) {
        int n = x.size();
        vector<int> ans(n,0);
        stack<int> st;
        int j = n-1;
        while(j >= 0){
            while(st.size() > 0 && x[j] >= x[st.top()]) st.pop();
            ans[j] = (st.size() != 0) ? st.top() : 0;
            st.push(j);
            j--; 
        }

        for(int i=0;i<ans.size();i++){
            if(ans[i] != 0) ans[i] -= i;
        }
        return ans;
    }
};