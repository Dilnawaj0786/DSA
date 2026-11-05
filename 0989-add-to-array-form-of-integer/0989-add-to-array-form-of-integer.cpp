class Solution {
public:
    void reverse(vector<int>& a){
        int i=0;
        int j=a.size()-1;
        while(i <= j) swap(a[i++],a[j--]);
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> a;
        while(k != 0){
            a.push_back(k % 10);
            k /= 10;
        }
        reverse(a);
        vector<int> ans;
        int extra = 0;
        int i=num.size()-1;
        int j = a.size()-1;
        while(i >= 0 && j >=0){
            int sum = num[i] + a[j] + extra;
            if(sum >= 10){
                ans.push_back(sum % 10);
                extra = sum /10;
            }else{
                ans.push_back(sum);;
                extra = 0;
            }
            i--;
            j--;
        }

        while(i >= 0){
            int sum = num[i] + extra;
            if(sum >= 10){
                ans.push_back(sum % 10);
                extra = sum /10;
            }else{
                ans.push_back(sum);
                extra = 0;
            }
            i--;
        }
        while(j >= 0){
            int sum = a[j] + extra;
            if(sum >= 10){
                ans.push_back(sum % 10);
                extra = sum /10;
            }else{
                ans.push_back(sum);
                extra = 0;
            }
            j--;
        }
        if(extra == 1) ans.push_back(1);
        reverse(ans);
        return ans;
    }
};