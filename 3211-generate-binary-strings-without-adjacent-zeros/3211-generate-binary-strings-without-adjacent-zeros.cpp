class Solution {
public:
    void helper(vector<string>& ans, string x, int n){
        if(x.size() == n){
            ans.push_back(x);
            return;
        }
        helper(ans,x+"1",n); // only adding 1
       if(x.empty() || x.back() != '0') helper(ans, x+"0", n); // only adding 0

    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        helper(ans,"",n);
        return ans;
    }
};