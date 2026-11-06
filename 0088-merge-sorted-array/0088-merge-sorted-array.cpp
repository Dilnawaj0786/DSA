class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j = 0;
        int k = m;
        while(i<k && j <n){
            if(nums1[i] <= nums2[j]) i++;
            else{
                int x = k;
                while(x>i+1 && x < (m+n)){
                    nums1[x] = nums1[x-1];
                    x--;
                }
                k++;
                nums1[i+1] = nums1[i];
                nums1[i] = nums2[j];
                j++;
                i++;
            }
        }
        while(j < n){
            nums1[k++] = nums2[j++];
        }
    }
};
    // void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
    //     vector<int> ans(m+n,0);
    //     int i= 0;
    //     int j= 0;
    //     int k = 0;

    //     while(i < m && j < n){
    //         if(num1[i] > num2[j]){
    //             ans[k++] = num2[j++];
    //         }else{
    //             ans[k++] = num1[i++];
    //         }
    //     }

    //     while(j < n){
    //         ans[k++] = num2[j++];
    //     }
         
    //     while(i < m){
    //         ans[k++] = num1[i++];
    //     }
    //     for(int i=0;i<num1.size();i++){
    //         num1[i] = ans[i];
    //     }
    // }
//};