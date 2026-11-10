class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int maxele = INT_MIN;
        for(int ele : score) if(ele > maxele) maxele = ele; // max ele
        vector<int> freq(maxele+1,0); // max + 1 freq array create
        int rank = 1; // rank decides
        vector<int> ans;// duplicates array
        for(int ele : score) ans.push_back(ele);
        sort(ans.begin(),ans.end());// sorting ans to find rank
        for(int i = ans.size()-1;i>=0;i--){ 
            freq[ans[i]] = rank++; // marking the rank
        }
        vector<string> st(ans.size()); // making answer array 
        for(int i=0;i<score.size();i++){
            int x = freq[score[i]];
            if(x == 1){
                st[i] = "Gold Medal";
            }else if(x == 2){
                st[i] = "Silver Medal";
            }else if(x == 3){
                st[i] = "Bronze Medal";
            }else{
                st[i] = to_string(x);
            }
        }
        return st;
    }
};