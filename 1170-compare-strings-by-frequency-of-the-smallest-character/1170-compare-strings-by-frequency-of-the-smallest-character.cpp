class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> freqq;
        vector<int> freqw;
        for(int i=0;i<queries.size();i++){
            vector<int> freq(26,0);
            string x = queries[i]; 
            for(int j=0;j<x.size();j++){
                freq[x[j]-'a']++;
            }
            int maxe = -1;
            for(int k=0;k<freq.size();k++){
                if(freq[k] > 0){
                    maxe = freq[k];
                    break;
                }
            }
            freqq.push_back(maxe);
        }

        for(int i=0;i<words.size();i++){
            vector<int> freq(26,0);
            string x = words[i]; 
            for(int j=0;j<x.size();j++){
                freq[x[j]-'a']++;
            }
            int maxe = -1;
            for(int k=0;k<freq.size();k++){
                if(freq[k] > 0){
                    maxe = freq[k];
                    break;
                }
            }
            freqw.push_back(maxe);
        }
        sort(freqw.begin(),freqw.end());
        vector<int> ans;
        for(int i=0;i<freqq.size();i++){
            int count = 0;
           for(int j =0;j<freqw.size();j++){
                if(freqw[j] > freqq[i]){
                    count++;
                }
           }
           ans.push_back(count);
        }
        return ans;
    }
};