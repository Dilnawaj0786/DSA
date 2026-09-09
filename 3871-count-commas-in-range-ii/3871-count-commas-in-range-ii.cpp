class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        long long start = 0;
        long long end = 9;
        long long digit = 1;
        long long comma = 0;
        while(start <= n){
            long long group_end = min(end,n);
            long long howmany = group_end - start +1;
            total += howmany * comma;
            start = end +1;
            end = end * 10 + 9;
            digit++;
            if(digit % 3 == 1){
                comma++;
            }
        }
        return total;
    }
};