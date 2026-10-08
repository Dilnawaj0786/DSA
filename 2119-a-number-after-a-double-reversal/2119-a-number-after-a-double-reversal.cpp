class Solution {
public:
    int reverse(int x){
        int y = 0;
        while( x != 0){
            int r = x % 10;
            y = y * 10 + r;
            x /= 10;
        }
        return y;
    }
    bool isSameAfterReversals(int num) {
        if(num == reverse(reverse(num))) return true;
        return false;
    }
};