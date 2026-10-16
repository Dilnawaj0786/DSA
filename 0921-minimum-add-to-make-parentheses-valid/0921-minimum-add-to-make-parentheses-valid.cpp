class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> x;
        for(char ch : s){
            if(!x.empty() && ch == ')' && x.top() == '(') x.pop();
            else x.push(ch);
        }
        int requiredchars = 0;
        while(!x.empty()){
            x.pop();
            requiredchars++;
        }
        return requiredchars;
    }
};