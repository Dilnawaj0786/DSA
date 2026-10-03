/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
       int st =1;// boundry check ke liye
        int end = mountainArr.length()-2;// boundry check ke liye
        int peak = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            int x = mountainArr.get(mid);
            int y = mountainArr.get(mid-1);
            int z = mountainArr.get(mid+1);
            if(x > y && x > z) peak = mid;
            if(x > z) end = mid-1;
            else st = mid+1;
        }
        st =0;
        end = peak;
        while(st <= end){
            int mid = st + (end-st)/2;
            int x = mountainArr.get(mid);
            if(x == target) return mid;
            if(x < target) st = mid+1;
            else end = mid-1;
        }
        st = peak+1;
        end = mountainArr.length()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            int x = mountainArr.get(mid);
            if(x == target) return mid;
            if(x < target) end = mid-1;
            else st = mid+1;
        }
        return -1;
    }
};