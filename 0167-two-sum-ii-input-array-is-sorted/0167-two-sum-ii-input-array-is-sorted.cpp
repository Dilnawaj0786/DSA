class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int st = 0;
        int end = arr.size()-1;
        while( st < end){
            if( arr[st] + arr[end] == target){
                return {st+1,end+1};
            }
            else if(arr[st] + arr[end]  >  target) end--;
            else st++;
        }
        return {-1,-1};
    }
};