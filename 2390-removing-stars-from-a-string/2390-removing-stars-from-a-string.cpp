class Solution {
public:
    void reversepleasehelp(string& s){
        int i=0;
        int j = s.size()-1;
        while(i<=j) swap(s[i++],s[j--]);
    }
    string removeStars(string s) {
        stack<char> x;
        for(int i=0;i<s.size();i++){
            if(!x.empty() && s[i] == '*') x.pop();
            else x.push(s[i]);
        }
        string ans = "";
        while(!x.empty()){
            ans.push_back(x.top());
            x.pop();
        }

        reversepleasehelp(ans);
        return ans;
    }
};