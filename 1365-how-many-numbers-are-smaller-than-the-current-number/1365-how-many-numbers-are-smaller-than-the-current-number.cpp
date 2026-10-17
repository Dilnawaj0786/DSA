class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101,0);
        for(int ele : nums) freq[ele]++;
        int sum = 0;
        int x = 0;
        for(int i=0;i<freq.size();i++){
            x = freq[i];
            freq[i] = sum;
            sum += x;
        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(freq[nums[i]]);
        }
        return ans;
    }
};