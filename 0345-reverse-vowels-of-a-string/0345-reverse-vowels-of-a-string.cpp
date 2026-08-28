class Solution {
public:
    bool isValid(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U' || ch == 'O'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int st =0;
        int end = s.size()-1;
        while(st <= end){
            if(isValid(s[st]) && isValid(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }else if(!isValid(s[st])){
                st++;
            }else if(!isValid(s[end])){
                end--;
            }
        }
        return s;
    }
};