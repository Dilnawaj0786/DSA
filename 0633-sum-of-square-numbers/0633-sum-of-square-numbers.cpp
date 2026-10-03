class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 0 || c == 1) return true;
        long long st = 0;
        long long end = sqrt(c);
        while(st <= end){
            if((st*st + end * end) == c) return true;
            if((st*st + end * end) < c) st++;
            else end--;
        }
        return false;
    }
};