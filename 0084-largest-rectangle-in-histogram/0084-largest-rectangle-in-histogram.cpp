class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        stack<int> st;
        vector<int> nsi(n); // next smaller index
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 && arr[st.top()] >= arr[i]) st.pop();
            if(st.size() > 0 ) nsi[i] = st.top();
            else nsi[i] = n;
            st.push(i);
        }
        while(st.size() > 0) st.pop();
        vector<int> psi(n); // previous smaller index
        for(int i=0;i<n;i++){
            while(st.size() > 0 && arr[st.top()] >= arr[i]) st.pop();
            if(st.size() > 0 ) psi[i] = st.top();
            else psi[i] = -1;
            st.push(i);
        }

        for(int i=0;i<n;i++){
            int h = arr[i];
            int width = nsi[i]-psi[i]-1;
            int area = h * width;
            ans = max(ans,area);
        }
        return ans;
    }
};