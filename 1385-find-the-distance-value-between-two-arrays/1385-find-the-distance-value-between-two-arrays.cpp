class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int dist = 0; int count = 0;
        for(int i=0;i<arr1.size();i++){
            int st =0;
            int end = arr2.size()-1;
            bool flag = true;
            while(st <= end){
                int mid = st + (end-st)/2;
                dist = abs(arr1[i]-arr2[mid]);
                if(dist <= d){
                    flag = false;
                    break;
                }
                else if(arr2[mid] < arr1[i]) st = mid+1;
                else end = mid-1;
            }
            if(flag) count++;
        }
        return count;
    }
};