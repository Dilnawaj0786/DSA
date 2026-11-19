class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(101,false);
        int minele = INT_MAX;
        int maxele = INT_MIN;
        for(int ele : nums){
            freq[ele] = true;
            if(ele > maxele) maxele = ele;
            if(ele < minele) minele = ele;
        }

        for(int i=minele ;i<= maxele;i++){
            if(freq[i] == true) continue;
            else ans.push_back(i);
        }
        return ans;

    }
};