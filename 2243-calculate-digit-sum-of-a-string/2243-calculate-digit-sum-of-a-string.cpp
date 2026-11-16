class Solution {
public:
    string getanswer(string& s, int& k){
        string x = "";
        if(s.size() <= k) return s; // base condition
        int count = 0;
        int sum = 0;
        for(int i=0;i<s.size();i++){
            count++;
            sum += (s[i]-'0');
            if(count % k == 0){
                x += to_string(sum);
                count = 0;
                sum = 0;
            }
        }
        if(count != 0) x += to_string(sum); // adding rest sum 
        return getanswer(x,k); // calling recursively
    }
    string digitSum(string s, int k) {
        if(s.size() <= k) return s;
        return getanswer(s,k);
    }
};