class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        for(int i=0;i<s.size();i += 2){
            if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')) changes++;
        }
        return changes;
    }
};