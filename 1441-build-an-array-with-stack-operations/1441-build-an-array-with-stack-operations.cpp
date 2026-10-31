class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int x = 1;
        int i=0;
        while(i<target.size()){
            if(x == target[i]){
                ans.push_back("Push");
                i++;
                x++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                x++;
            }
        }
        return ans;
    }
};