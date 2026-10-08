class Solution {
public:
    void merge(vector<int>& a, vector<int>& b,vector<int>& nums){
        int i=0,j=0,k=0;
        while(i<a.size() && j < b.size()){
            if(to_string(a[i]) + to_string(b[j]) > 
               to_string(b[j]) + to_string(a[i])) { 
                nums[k++] = a[i++]; 
            }else{
                nums[k++] = b[j++];
            }
        }
        while(i<a.size()) nums[k++] = a[i++];
        while(j<b.size()) nums[k++] = b[j++];
    }
    void mergesort(vector<int>& nums){
        int n = nums.size();
        if(n <= 1) return;
        vector<int> a(n/2);
        vector<int> b(n-n/2);
        int idx = 0;
        for(int i=0;i<n/2;i++){
            a[i] = nums[idx++];
        }
        for(int i=0;i<n-n/2;i++){
            b[i] =nums[idx++];
        }
        mergesort(a);
        mergesort(b);
        merge(a,b,nums);

    }
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 1) return to_string(nums[0]);
        mergesort(nums);
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans += to_string(nums[i]);
        }
        if(ans[0] == '0') return "0";
        return ans;
    }
};