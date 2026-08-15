class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();

        int i=0;
        int j=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> ans;
        while( i < n && j < m){
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                i++;
            }else{
                j++;
            }
        }
        if(!ans.empty()) {
            int k = 1;

            for(int i = 1; i < ans.size(); i++) {
                if(ans[i] != ans[k-1]) {
                    ans[k] = ans[i];
                    k++;
                }
            }

            ans.resize(k);
        }       
        return ans;
    }
};