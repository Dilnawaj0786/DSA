class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        if(num == 0) return true;
        int x = num/2;
        int st =2;
        int end = x;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid  == num/mid && num % mid == 0) return true;
            if(mid < num/mid) st = mid + 1;
            else end = mid-1;
        }
        return false;
    }
};