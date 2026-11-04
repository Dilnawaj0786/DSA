class Solution {
public:
    string addition(string x, string y){
        string ans = "";
        int i=x.size()-1;
        int j=y.size()-1;
        int extra = 0;
        while(i>=0 && j >=0){
            int a = x[i]-'0';
            int b = y[j]-'0';
            int sum = a+b+extra;
            int z = sum%10;
            extra = sum/10;
            ans.push_back(z+'0');
            i--;
            j--;
        }

        while( i>= 0){
            int a = x[i]-'0';
            int sum = a+extra;
            ans.push_back((sum%10)+'0');
            extra = sum/10;
            i--;
        }
        while( j>= 0){
            int b = y[j]-'0';
            int sum = b+extra;
            ans.push_back((sum%10)+'0');
            extra = sum/10;
            j--;
        }
        if(extra) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string multiply(string n1, string n2) {
        if(n1 == "0" || n2 == "0") return "0";
        int n = n1.size()-1;
        int m = n2.size()-1;
        vector<string> ans;
        int mul = 0;
        for(int i=n;i>= 0;i--){
            string x = "";
            int carry = 0;
            for(int j = m;j>=0;j--){
                int a = n1[i]-'0';
                int b = n2[j]-'0';
                int sum = a*b+carry;
                x += to_string(sum%10);
                carry = sum/10;
            }
            if(carry) x += to_string(carry);
            reverse(x.begin(),x.end());
            x += string(mul,'0');
            mul++;
            ans.push_back(x);
        }
        string sol = "";
        for(int i=0;i<ans.size();i++){
            sol = addition(sol,ans[i]);
        }
        return sol;
        
    }
};