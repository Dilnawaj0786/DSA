class Solution {
public:
    int gcd(int a, int b){
        if(a == 0) return b;
        return gcd(b%a,a);
    }
    long long gcdSum(vector<int>& nums) {
        int maxele = INT_MIN;
        vector<int> prefixgcd;
        for(int ele : nums){
            if(ele > maxele) maxele = ele;
            prefixgcd.push_back(gcd(maxele,ele));
        }
        long long ans = 0;
        sort(prefixgcd.begin(),prefixgcd.end());
        int st =0;
        int end = prefixgcd.size()-1;
        while(st<end){
            ans += gcd(prefixgcd[st++],prefixgcd[end--]);
        }
        return ans;

    }
};