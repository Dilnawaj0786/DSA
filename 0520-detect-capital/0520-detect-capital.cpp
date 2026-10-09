class Solution {
public:
    bool detectCapitalUse(string word) {
        int allCap = 0;
        int allSma = 0;
        int first = 0;
        int n = word.size();
        if(int(word[0]) >= 65 && int(word[0]) <= 90 ) first++;
        for(int i=0;i<word.size();i++){
            if(int(word[i]) >= 65 && int(word[i]) <= 90) allCap++;
            else allSma++;
        }
        if(allCap == n || allSma == n) return true;
        if(first == 1 && allSma == n-1 ) return true;
        return false;
    }
};