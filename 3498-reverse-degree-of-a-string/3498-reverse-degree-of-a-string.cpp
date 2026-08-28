class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i< s.size();i++){
            int idx = (26 -(s[i]-'a'));
            int product = (i+1)*(idx);
            sum += product;
        }
        return sum;
    }
};