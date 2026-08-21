class Solution {
public:

    bool notValid(char ch){
        if(ch >= 65 && ch <= 90) return false;
        else if(ch >= 97 && ch <= 122) return false;
        else if(ch >= 48 && ch <= 57) return false;
        else return true;
    }
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size()-1;
        while(st <= end){
            char x = s[st];
            char y = s[end];
            if(x >= 65 && x <= 90) x+= 32;
            if(y >= 65 && y<= 90) y+= 32;
            if(notValid(x)){
                st++;
            }else if(notValid(y)){
                end--;
            }
            else{
                if(x != y) return false;
                st++;
                end--;
            }
        }
        return true;
    }
};