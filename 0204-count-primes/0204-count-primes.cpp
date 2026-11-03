class Solution {
public:
    bool isPrime(int n){
        if(n == 2) return true;
        if(n == 0 || n % 2 == 0 || n ==1) return false;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n % i == 0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
        int count =0;
        for(int i=2;i<n;i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
};