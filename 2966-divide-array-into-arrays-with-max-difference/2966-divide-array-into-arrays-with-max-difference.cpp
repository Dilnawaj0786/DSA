class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = n/3;
        vector<vector<int>> ans;
        int i=0;
        while(i<n){
            vector<int> temp;
            int j = 2;
            while(j > 0){
                temp.push_back(nums[i++]);
                j--;
            }
            temp.push_back(nums[i]);
            i++;
            if(temp[2]-temp[0] <=k ) ans.push_back(temp);
            else return {};
        }
        return ans;
    }
};