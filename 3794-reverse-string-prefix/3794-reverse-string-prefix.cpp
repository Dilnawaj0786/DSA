class Solution {
public:
    string reverseS(string& s, int i , int j){
        while(i <= j){
            swap(s[i++],s[j--]);
        }
        return s;
    }
    string reversePrefix(string s, int k) {
        return reverseS(s,0,k-1);
    }
};