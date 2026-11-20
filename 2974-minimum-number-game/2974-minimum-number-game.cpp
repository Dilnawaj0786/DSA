class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int ele : nums) pq.push(ele);
        int k =0;
        while(pq.size() > 0){
            int alice = pq.top();
            pq.pop();
            int bob = pq.top();
            pq.pop();
            nums[k++] = bob;
            nums[k++] = alice;
        }
        return nums;
    }
};