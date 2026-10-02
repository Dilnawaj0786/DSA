class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long x = 1;
        while(n != 0){
            if(n % 10 == 0) n /= 10;
            else{
                int digit = n % 10;
                ans += (x*digit);
                x *= 10;
                n /= 10;
            }
        }

        return ans;
    }
};