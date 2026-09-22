class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        int sqsum = 0;
        while(n != 0){
            int digit = n % 10;
            sum += digit;
            sqsum += digit*digit;
            n /= 10;
        }
        return (sqsum - sum >= 50) ? true : false;
    }
};