class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum =0;
        for(int ele : nums){
            vector<int> count;
            for(int i=1;i<=sqrt(ele);i++){
                if(ele % i == 0){
                    count.push_back(i);
                    if(i != ele/i) count.push_back(ele/i);
                }
            }

            if(count.size() == 4){
                for(int i=0;i<count.size();i++){
                    sum += count[i];
                }
            }
        }
        return sum;
    }
};