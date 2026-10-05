class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26,0);
        int count = 0;
        for(char ch : s) freq[ch-'a']++;
        for(int ele : freq){
            if(ele > 0) count++;
        }
        return count;
    }
};