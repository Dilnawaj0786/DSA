class Solution {
public:
    int binary(int x){
        int ans = 0;
        while(x != 0){
            int r = x % 2;
            if(r == 1) ans++;
            x /= 2;
        }
        return ans;
    }
    int calculateScore(int a, int b) {
        int x = binary(a);
        int y = binary(b);
        return (x >= y) ? x*y : y/x;
    }
};