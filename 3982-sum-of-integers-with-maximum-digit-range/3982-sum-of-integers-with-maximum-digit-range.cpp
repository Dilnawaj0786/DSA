class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> idx(n,0);
        int maxrange = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int x= nums[i];
            int mrange = INT_MIN;
            int srange = INT_MAX;
            while(x != 0){
                int r = x % 10;
                mrange = max(mrange,r);
                srange = min(srange,r);
                x /= 10;
            }
            idx[i] = (mrange-srange);
        }
        for(int i=0;i<idx.size();i++){
            if(idx[i] > maxrange) maxrange = idx[i];
        }

        vector<int> indices;
        for(int i=0;i<idx.size();i++){
            if(idx[i] == maxrange){
                indices.push_back(i);
            }
        }
        int ans =0;
        for(int i=0;i<indices.size();i++){
            ans += nums[indices[i]];
        }
        return ans;
        
    }
};