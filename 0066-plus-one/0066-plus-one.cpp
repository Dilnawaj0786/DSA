class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        int j = digits.size()-1;
        while( j >= 0){
            int sum = carry + digits[j];
            if(sum < 10){
                carry = 0;
                ans.push_back(sum);
            }else{
                carry = 1;
                ans.push_back(0);
            }
            j--;
        }

        if(carry == 1) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};