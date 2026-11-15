class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        int vow = 0;
        int cons = 0;
        for(int i=0;i<26;i++){
            char ch = (char)(i+97);
            if(isvowel(ch)){
                vow = max(vow,freq[i]);
            }else{
                cons = max(cons,freq[i]);
            }
        }
        return (vow+ cons);
    }
};