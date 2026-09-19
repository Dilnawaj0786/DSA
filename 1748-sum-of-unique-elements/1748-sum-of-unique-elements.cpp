class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> freq(101,0);
        for(int ele : nums){
            freq[ele]++;
        }

        int sum = 0;
        for(int i=0;i<freq.size();i++){
            if(freq[i] == 1) sum += i;
        }
        return sum;
    }
};