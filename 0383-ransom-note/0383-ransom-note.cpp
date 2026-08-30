class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freqM(26,0);
        for(char ch : magazine){
            freqM[ch-'a']++;
        }

        for(int i=0;i<ransomNote.size();i++){
            if(freqM[ransomNote[i]-'a'] >= 1){
                freqM[ransomNote[i]-'a']--;
            }else{
                return false;
            }
        }
        return true;
    }
};