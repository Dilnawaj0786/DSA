class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1) return false;
        stack<char> x;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') x.push(s[i]);
            else{
                if(x.size() == 0) return false;
                else if(s[i] == ')' && x.top() == '(') x.pop();
                else if(s[i] == ']' && x.top() == '[') x.pop();
                else if(s[i] == '}' && x.top() == '{') x.pop();
                else return false;
            }
        }

        if(x.size() == 0) return true;
        return false;
    }
};