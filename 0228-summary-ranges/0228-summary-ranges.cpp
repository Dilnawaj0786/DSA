class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        
        if(nums.empty()) return ans; 
        long long count = nums[0];
        string x = "";
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == count){
                cnt++;
                count++;
            }else{
                if(cnt<2){
                    ans.push_back(to_string(nums[i-1]));
                }else{
                    x += to_string(nums[i-cnt]);
                    x += "->";
                    x += to_string(nums[i-1]);
                    ans.push_back(x);
                    x = "";
                }
                count = (long long)nums[i] + 1; ;
                cnt  = 1;
            }
        }
        if(cnt<2){
            ans.push_back(to_string(nums.back()));
        }else{
            x += to_string(nums[nums.size()-cnt]);
            x += "->";
            x += to_string(nums.back());
            ans.push_back(x);
        }
        return ans;
    }
};