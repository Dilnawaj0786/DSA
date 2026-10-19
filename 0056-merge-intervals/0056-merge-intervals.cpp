class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][1] >= intervals[i+1][0]){
                int mn1 = INT_MAX;
                int mn2 = INT_MAX;
                int mx1 = INT_MIN;
                int mx2 = INT_MIN;
                for(int j=0;j<2;j++){
                    mn1 = min(intervals[i][j],mn1);
                    mx1 = max(intervals[i][j],mx1);
                }

                for(int j=0;j<2;j++){
                    mn2 = min(intervals[i+1][j],mn2);
                    mx2 = max(intervals[i+1][j],mx2);
                }
                int mn = min(mn1,mn2);
                int mx = max(mx1,mx2);
                intervals[i+1] = {mn,mx};
            }else{
                ans.push_back(intervals[i]);
            }
        }
        ans.push_back(intervals.back());
        return ans;
    }
};