class Solution {
public:
    int digitsumfind(int num){
        int sum = 0;
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int getsum(vector<int>& nums){
        int elesum = 0;
        int digitsum = 0;
        for(int ele : nums){
            elesum += ele;
            digitsum += digitsumfind(ele);
        }
        return abs(elesum - digitsum);
    }
    int differenceOfSum(vector<int>& nums) {
        return getsum(nums);
    }
};