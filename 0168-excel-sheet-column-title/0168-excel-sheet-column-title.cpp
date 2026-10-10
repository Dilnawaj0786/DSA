class Solution {
public:
    void reverse(string& x){
        int i=0;
        int j = x.size()-1;
        while(i<=j) swap(x[i++],x[j--]);
    }
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber != 0){
            columnNumber--;
            int rem = columnNumber % 26;
            ans.push_back('A'+rem);
            columnNumber /= 26;
        }
        reverse(ans);
        return ans;
    }
};