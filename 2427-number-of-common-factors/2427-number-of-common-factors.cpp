class Solution {
public:
    int highestFactor(int x, int y){
        if(y == 0) return x;
        return highestFactor(y, x % y);
    }
    int commonFactors(int a, int b) {
        if(a == 1 || b == 1) return 1;
        int factor = 0;
        int x =  highestFactor(a,b);
        for(int i=1;i<=x;i++){
            if((a % i == 0) && (b % i == 0)) factor++; 
        }
        return factor;
    }
};