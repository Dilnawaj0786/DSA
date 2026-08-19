class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n ==1 ) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];
        int st = 0;
        int end = arr.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
            int f = mid;
            int s = mid;
            if((arr[mid] == arr[mid-1])) f = mid-1;
            else s = mid+1;
            int leftLength = f-st;
            if(leftLength % 2 == 1) end = f - 1;
            else st = s+1;
        }
        return 0;
    }
};