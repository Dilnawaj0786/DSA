class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = friends.size();
        vector<int> ans(n,0);
        int k =0;
        for(int i=0;i<order.size();i++){
            for(int j=0;j<friends.size();j++){
                if(order[i] == friends[j]){
                    ans[k++] = order[i];
                    break;
                }
            }
        }
        return ans;
    }
};