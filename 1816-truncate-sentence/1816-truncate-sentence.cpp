class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces = 0;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i] == ' ') spaces++;
            if(spaces == k) break;
        }
        s.resize(i);
        return s;
    }
};