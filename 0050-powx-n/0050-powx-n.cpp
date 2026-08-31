class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;

        if(exp < 0){
            x = 1/x;
            exp = -exp;
        }

        if(exp == 0 ) return 1.0;

        double ans = myPow(x, exp/2) ;
        if(exp % 2 == 0){
            return ans * ans;
        }else{
            return ans * ans * x;
        }

    }
};