class Solution {
public:
    int GCD(int x, int y){
        if(y == 0) return x;
        return GCD(y,x % y);
    }
    int gcdOfOddEvenSums(int n) {
        int even = n * n + n;
        int odd = n *n;
        return GCD(even,odd);
        // int oddsum = 0 ;
        // int evensum = 0;

        // for (int i=1;i<=2*n;i+=2){
        //     oddsum += i;
        // }

        // for (int i=2;i<=2*n;i+=2){
        //     evensum += i;
        // }

        // return gcd(oddsum,evensum);
    }
};