class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0) return -1;
        long long n = 1;
        int length = 1;
        while(length <= k){
            if(n % k == 0) return length;
            n = (n *10) % k;
            n += 1;
            length++;
        }
        return -1;
    }
};