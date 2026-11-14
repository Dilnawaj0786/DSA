class Solution {
public:
    string getBinary(int n,int base){
        string ans = "";
        while( n != 0){
            int r = n % base;
            ans.push_back(r+'0');
            n /= base;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    bool isTrue(string& ans){
        int i=0;
        int j = ans.size()-1;
        while(i <= j){
            if(ans[i] != ans[j]) return false;
            i++;
            j--;
        }
        return true;

    }
    bool isStrictlyPalindromic(int n) {
        // method 1 
        for(int i=2;i<= n;i++){
            string binary = getBinary(n,i);
            bool flag =  isTrue(binary);
            if(flag == false) return false;
        }
        return true;

        // // method 2
        // return false;
    }
};