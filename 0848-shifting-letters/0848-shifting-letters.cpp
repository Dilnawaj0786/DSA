class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long total = 0;
        for(int ele : shifts){
            total = (total + ele) % 26;
        }
        int y = 0;
        for(int i=0;i<s.size();i++){
            int step = (total % 26);
            if(i == 0){
                int x = step + (s[i]-'a');
                x = x % 26;
                s[i] = (char)( x+97);
            }else{
                y = ( y+ shifts[i-1]) % 26;
                int x = step + (s[i]-'a') - y;
                x =(x % 26 + 26 )% 26; // negative reaminder handling
                s[i] = (char)( x+97);
            }
        }
        return s;
    }
};