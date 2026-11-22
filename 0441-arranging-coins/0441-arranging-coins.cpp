class Solution {
public:
    bool isvalid(long long mid, long long n){
        long long coins = (mid * (mid+1))/2;
        return (coins <= n) ? true : false;
    }
    int arrangeCoins(int n) {
        long long x = n;
        long long ans = 1;
        long long st = 1;
        long long end = n;
        while(st <= end){
            long long mid = st + (end-st)/2;
            if(isvalid(mid,n)){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
};