class Solution {
public:
    bool isVowel(char ch){
        if(ch >='A' && ch <= 'Z'){
            ch += 32;
        }
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    string sortVowels(string s) {
        string vowel = "";
        for(char ch : s){
            if(isVowel(ch)){
                vowel.push_back(ch);
            }
        }
        sort(vowel.begin(),vowel.end());
        int k =0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i] = vowel[k++];
            }
        }
        return s;
    }
};