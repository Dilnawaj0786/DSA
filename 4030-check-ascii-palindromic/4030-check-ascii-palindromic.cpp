class Solution {
public:
    string BinaryNumber(int x){
        string binary = "";
        while(x != 0){
            int r = x % 2;
            binary.push_back(r +'0');
            x /= 2;
        }
        int len = binary.size();
        if(len < 8){
            int a = 8-len;
            while( a != 0){
                binary.push_back(0 +'0');
                a--;
            }
        }
        reverse(binary.begin(),binary.end());
        return (binary);
    }
    bool isPalindromic(string s) {
        string x = "";
        for(char ch : s){
            int y = (int)(ch);
            x += BinaryNumber(y);
        }

        int i=0;
        int j = x.size()-1;
        while(i <= j){
            if(x[i] != x[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};