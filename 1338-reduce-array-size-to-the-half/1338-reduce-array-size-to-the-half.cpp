class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> freq(100001,0);
        for(int ele : arr) freq[ele]++;
        vector<pair<int,int>> vq;
        for(int i=0;i<freq.size();i++){
            if(freq[i] > 0){
                vq.push_back({freq[i],i});
            }
        }
        sort(vq.begin(),vq.end(),greater<pair<int,int>>());
        int n = arr.size();
        int k = n/2;
        int count = 0;
        for(int i=0;i<vq.size();i++){
            while(vq[i].first > 0 && k > 0){
                vq[i].first--;
                k--;
            }
            count++;
            if(k == 0) break;
        }
        return count;

    }
};