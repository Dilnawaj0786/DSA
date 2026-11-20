class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // n approach
        int fisrtmax = INT_MIN;
        int secondmax = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= fisrtmax){
                secondmax = fisrtmax; // hnadle duplicates maximum
                fisrtmax = nums[i];
            }else if(secondmax < nums[i]){
                secondmax = nums[i];
            }
        }
        return (fisrtmax-1)*(secondmax-1);



        // nlogn approach


        // priority_queue<int> pq;
        // for(int ele : nums) pq.push(ele);
        // int maxp = 1;
        // maxp *= pq.top()-1;
        // pq.pop();
        // maxp *= pq.top()-1;
        // pq.pop();
        // return maxp;
    }
};