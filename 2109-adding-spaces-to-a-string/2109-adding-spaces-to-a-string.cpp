class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int count = 0;
        int idx = 0;
        for(char ch : s){
            if(idx < spaces.size() && count == spaces[idx]){
                ans.push_back(' ');
                idx++;
            }
            ans.push_back(ch);
            count++;
        }
        return ans;
    }
};