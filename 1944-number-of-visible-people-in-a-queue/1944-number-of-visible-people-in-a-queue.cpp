class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        stack<int> x;
        vector<int> ans(n,0);
        for(int i=n-1;i>= 0;i--){
            int count = 0;
            while(x.size() > 0 && x.top() <= arr[i]){
                x.pop();
                ans[i]++;
            }
            if(x.size() != 0) ans[i]++;
            x.push(arr[i]);
        }
        return ans;
    }
};