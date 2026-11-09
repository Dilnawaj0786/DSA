class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        //method 1
        int st =0;
        int end = arr.size()-1;
        while(st<end){
            int mid = st + (end-st)/2;
            if(mid % 2 == 1){
                mid--;
            }
            if(arr[mid] == arr[mid+1]) st = mid+2;
            else end = mid;
        }
        return arr[st];


        // mwthod 2
        // int st =0;
        // int end = arr.size()-1;
        // while(st<end){
        //     int mid = st + (end-st)/2;
        //     if(mid % 2 == 0){
        //         if(arr[mid] == arr[mid+1]){
        //             st = mid+2;
        //         }else{
        //             end = mid;
        //         }
        //     }else{
        //         if(arr[mid] == arr[mid-1]){
        //             st = mid+1;
        //         }else{
        //             end = mid-1;
        //         }
        //     }
        // }
        // return arr[st];

        
        // method 3
        // int n = arr.size();
        // if(n == 1) return arr[0];
        // if(arr[0] != arr[1]) return arr[0];
        // if(arr[n-1] != arr[n-2]) return arr[n-1];
        // int st =0;
        // int end = arr.size()-1;

        // while(st <= end){
        //     int mid = st + (end-st)/2;
        //     if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
        //         return arr[mid];
        //     }
        //     int first = mid;
        //     int second = mid;
        //     if(arr[mid] == arr[mid-1]) first = mid-1;
        //     else second = mid+1;
        //     int length = first - st;
        //     if(length % 2 == 1) end = first-1;
        //     else st = second+1;
        // }
        return 0;
    }
};