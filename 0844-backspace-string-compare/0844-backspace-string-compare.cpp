class Solution {
public:
    void reversepleasehelp(string& s){
        int i=0;
        int j = s.size()-1;
        while(i<=j) swap(s[i++],s[j--]);
    }
    string stackpleasehelp(string s){
        stack<char> x;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                if(!x.empty()) x.pop();
            }
            else x.push(s[i]);
        }
        string ans = "";
        while(x.size() > 0){
            ans.push_back(x.top());
            x.pop();
        }
        reversepleasehelp(ans);
        return ans;

    }
    bool backspaceCompare(string s, string t) {
        return (stackpleasehelp(s) == stackpleasehelp(t)) ? true : false;
    }
};