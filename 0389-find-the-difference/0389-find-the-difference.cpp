class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = s.size();
        int m = t.size();
        if(n > m){
            vector<int> freqs(26,0);
            for(int i=0;i<t.size();i++){
                freqs[t[i]-'a']++;
            }

            for(int i=0;i<s.size();i++){
                if(freqs[s[i]-'a'] == 0){
                    return s[i];
                }else{
                    freqs[s[i]-'a']--;
                }
            }
        }else{
           vector<int> freqs(26,0);
            for(int i=0;i<s.size();i++){
                freqs[s[i]-'a']++;
            }

            for(int i=0;i<t.size();i++){
                if(freqs[t[i]-'a'] == 0){
                    return t[i];
                }else{
                    freqs[t[i]-'a']--;
                }
            }
        }
        return 'a';
    }
};