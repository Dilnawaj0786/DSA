class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> freq(101);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int sum = 0;
        for(int i=1;i<101;i++){
            if(freq[i] % k == 0){
                while(freq[i]>0){
                    sum += i;
                    freq[i]--;
                }
            }
        }
        return sum;
    }
};