class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2,0);
        int n = nums1.size();
        int m = nums2.size();
        int i=0;
        int idx_i = 0;
        while(i<n){
            int j =0;
            while(j < m){
                if(nums1[i] == nums2[j]){
                    idx_i++;
                    break;
                }
                j++;
            }
            i++;
        }
        int j = 0;
        int idx_j = 0;
        while(j<m){
            int i =0;
            while(i < n){
                if(nums1[i] == nums2[j]){
                    idx_j++;
                    break;
                }
                i++;
            }
            j++;
        }
        ans[0] = idx_i;
        ans[1] = idx_j;
        return ans;

    }
};