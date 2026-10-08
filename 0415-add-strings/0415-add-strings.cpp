class Solution {
public:
    void reverse(string& x){
        int i=0;
        int j=x.size()-1;
        while(i <= j) swap(x[i++],x[j--]);
    }
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string ans = "";
        while(i >= 0 && j >= 0){
            int x = (num1[i--]-'0') + (num2[j--]-'0') + carry;
            if(x > 9){
                x = x % 10;
                carry = 1;
                ans.push_back(x+'0');
            }else{
                carry = 0;
                ans.push_back(x+'0');
            }
        }
        while(j >= 0){
            int x = (num2[j--]-'0') + carry;
            if(x > 9){
                x = x % 10;
                carry = 1;
                ans.push_back(x+'0');
            }else{
                carry = 0;
                ans.push_back(x+'0');
            }
        }

        while(i >= 0){
            int x = (num1[i--]-'0') + carry;
            if(x > 9){
                x = x % 10;
                carry = 1;
                ans.push_back(x+'0');
            }else{
                carry = 0;
                ans.push_back(x+'0');
            }
        }
        if(carry == 1) ans.push_back(carry+'0'); 
        reverse(ans);
        return ans;
    }
};