class NumArray {
private:
    vector<int> ans;
public:
    NumArray(vector<int>& nums) {
        for(int ele : nums) ans.push_back(ele);
    }
    
    int sumRange(int left, int right) {
        int sum =0;
        for(int i=left;i<=right;i++) sum += ans[i];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */