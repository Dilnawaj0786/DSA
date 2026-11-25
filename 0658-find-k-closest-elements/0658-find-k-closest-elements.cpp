class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> ans;
        for(int i=0;i<arr.size();i++){
            int dist = abs(x-arr[i]);
            ans.push({dist,arr[i]});
            if(ans.size() > k) ans.pop();
        }
        vector<int> nums;
        while(ans.size() > 0){
            nums.push_back(ans.top().second);
            ans.pop();
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};