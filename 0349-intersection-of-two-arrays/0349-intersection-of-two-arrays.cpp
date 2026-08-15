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
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};