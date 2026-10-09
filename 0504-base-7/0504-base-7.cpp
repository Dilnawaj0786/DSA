class Solution {
public:
    void reverse(string& x){
        int i=0;
        int j = x.size()-1;
        while(i <= j) swap(x[i++],x[j--]);
    }
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool neg = false;
        if(num < 0){
            neg = true;
            num = -num;
        }
        string ans = "";
        while(num != 0){
            int r = num % 7;
            ans.push_back(r+'0');
            num /= 7;
        }
        if(neg) ans.push_back('-');
        reverse(ans);
        return ans;
    }
};