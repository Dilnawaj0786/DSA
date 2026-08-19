class Solution {
public:
    int mySqrt(int x) {
        if( x == 0) return 0;
        int st = 1;
        int end = x;

        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid > x/mid){
                end = mid-1;
            }
            else if(mid < x/mid){
                st = mid+1;
            }else{
                return mid;
            }
        }
        return end;
    }
};