class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge(nums2.size(),-1);
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(st.size()>0 && st.top() <= nums2[i]) st.pop();
            nge[i] = (st.size() != 0) ? st.top() : -1;
            st.push(nums2[i]);
        }
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    nums1[i] = nge[j];
                    break;
                }
            }
        }
        return nums1;
    }
};