class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        priority_queue<int> pqs;
        priority_queue<int,vector<int>,greater<int>> pqg;
        for(int ele : nums){
            pqg.push(ele);
            pqs.push(ele);
            if(pqg.size() > k) pqg.pop();
            if(pqs.size() > k) pqs.pop();
        }
        int sum = 0;
        while(pqg.size() > 0){
            sum += pqg.top();
            sum -= pqs.top();
            pqg.pop();
            pqs.pop();
        }
        return sum;
    }
};