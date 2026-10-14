class Solution {
public:
    bool isValid(string x) {
        if(x.size() % 2 == 1) return false;
        stack<char> s;
        for(char ch : x){
            if(ch == '(' || ch == '[' || ch == '{') s.push(ch);
            else{
                if(s.size() == 0) return false;
                else if(ch == ')' && s.top() == '(') s.pop();
                else if(ch == ']' && s.top() == '[') s.pop();
                else if(ch == '}' && s.top() == '{') s.pop();
                else return false;
            }
        }
        return (s.empty()) ? true : false;
    }
};