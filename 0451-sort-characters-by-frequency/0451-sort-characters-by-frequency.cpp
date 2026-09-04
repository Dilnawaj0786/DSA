class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128,0);

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }

        string ans = "";
        while(true){
            int mxfr = 0;
            int mxidx= -1;
            for(int i=0 ; i<freq.size();i++){
                if(mxfr < freq[i]){
                    mxfr = freq[i];
                    mxidx = i;
                } 
            }

            if(mxfr == 0) break;
            for(int i=0;i<mxfr;i++){
                ans.push_back(char(mxidx));
            }

            freq[mxidx] = 0;
        }
        return ans;
    }
};