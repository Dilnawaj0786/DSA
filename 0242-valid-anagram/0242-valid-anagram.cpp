class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        int n= s.size();
        int m = t.size();
        if(n != m) return false;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            freq[t[i]-'a']--;
            if(freq[t[i]-'a'] < 0){
                return false;
            }
        }
        return true;
    }
};