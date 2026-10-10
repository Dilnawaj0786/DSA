class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> freq(101,0);
        vector<int> ans;
        for(int ele : nums){
            freq[ele]++;
            if(freq[ele] > 1){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};