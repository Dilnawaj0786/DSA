class Solution {
public:
    int divide(int dividend,int divisor) {
        if (dividend == -2147483648 && divisor == -1) {
            return 2147483647; 
        }
        long long k =0;
        bool flag = false;
        if(divisor == 1) return dividend;
        if(divisor == -1) return (-(long long )dividend);
        if(divisor < 0){
            flag = true;
        } 

        if(dividend < 0){
            flag = true;
        } 
        if(divisor < 0 && dividend < 0){
            flag = !flag;
        }
        long long x =abs((long long )divisor);
        long long y = abs((long long )dividend);
        while(x <= y){
            y -= x;
            k++;
        }
        if(dividend == divisor ) return 1;
        if(flag == true) return (-k);
        return k;
    }
};