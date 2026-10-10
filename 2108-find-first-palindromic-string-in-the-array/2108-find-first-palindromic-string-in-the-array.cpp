class Solution {
public:
    bool checkstring(string s){
        string x = s;
        int i=0,j=s.size()-1;
        while(i<=j) swap(s[i++],s[j--]);
        if(s == x) return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(checkstring(words[i])) return words[i];
        }
        return "";
    }
};