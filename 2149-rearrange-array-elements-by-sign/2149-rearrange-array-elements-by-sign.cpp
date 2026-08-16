class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> pos;
        vector<int> neg;

        for(int ele : nums){
            if(ele  > 0){
                pos.push_back(ele);
            }else{
                neg.push_back(ele);
            }
        }

        int n = pos.size();
        int m = neg.size();
        int k =0;
        int j =0;
        for(int i=0;i<(n+m);i++){
            if(i % 2 == 0){
                ans.push_back(pos[k++]);
            }else{
                ans.push_back(neg[j++]);
            }
        }
        return ans;
    }
};