class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // return nums[n-k];

        priority_queue<int,vector<int>,greater<int>> pq;
        for(int ele : arr){
            pq.push(ele);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
    }
};