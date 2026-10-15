class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26,0);
        for(char ch : sentence) freq[ch-'a']++;
        for(int ele : freq) if(ele < 1) return false;
        return true;
    }
};