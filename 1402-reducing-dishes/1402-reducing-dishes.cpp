class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int curr_sum=0;
        int ans=0;
        int n = satisfaction.size()-1;
        for(int i=n;i>=0;i--){
            if(curr_sum+satisfaction[i]> 0){
                curr_sum += satisfaction[i];
                ans += curr_sum;
            }else return ans;
            
        }
        return ans;
    }
};