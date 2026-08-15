class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int i =0;
        int j = 0;
        int smallest = INT_MAX;
        int flag = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                flag = 1;
                int current_min =  a[i];
                smallest = min(smallest,current_min);
                i++;
                j++;
            }
            else if(a[i] < b[j]) i++;
            else j++;
        }
        if(flag == 0){
            return -1;
        }else{
            return smallest;
        }
    }
};