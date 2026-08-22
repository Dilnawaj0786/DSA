class Solution {
public:
    bool checkDivisibility(int n) {
        if(n < 10) return false;
        int x = n;
        int sum = 0;
        int product = 1;
        while(x != 0){
            sum += x % 10;
            product *= x % 10;
            x /= 10;
        }

        if(n % (sum + product) == 0) return true;
        else return false;
    }
};