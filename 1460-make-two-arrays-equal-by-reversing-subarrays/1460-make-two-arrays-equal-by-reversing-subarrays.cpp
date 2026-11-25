class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // method 1 using frequency O(n)
        vector<int> freq(1001,0);
        vector<int> freq1(1001,0);
        for(int ele : target) freq[ele]++;
        for(int ele : arr) freq1[ele]++;
        for(int i=0;i<freq.size();i++) if(freq[i] != freq1[i]) return false;
        return true;



        // // method 2 using sorting O(nlogn)
        // sort(target.begin(),target.end());
        // sort(arr.begin(),arr.end());
        // return (target == arr) ? true : false;
    }
};