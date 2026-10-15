class Solution {
public:
    int minLength(string s) {
        stack<int> x;
        for(int i=0;i<s.size();i++){
            if(!x.empty() && s[i] == 'B' && x.top() == 'A') x.pop();
            else if(!x.empty() && s[i] == 'D' && x.top() == 'C') x.pop();
            else{
                x.push(s[i]);
            }
        }
        int len = 0;
        while(x.size() > 0){
            len++;
            x.pop();
        }
        return len;
    }
};