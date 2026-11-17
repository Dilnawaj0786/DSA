class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int> index;
        queue<int> q;
        for(int i=0;i<n;i++) q.push(i);
        while(q.size() > 0){
            index.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }

        vector<int> ans(n,0);
        for(int i=0;i<index.size();i++){
            ans[index[i]]= deck[i];
        }
        return ans;
    }
    // vector<int> deckRevealedIncreasing(vector<int>& deck) {
    //     int n = deck.size();
    //     sort(deck.begin(),deck.end());
    //     vector<int> indices;
    //     queue<int> q;
    //     for(int i=0;i<n;i++){
    //         q.push(i);
    //     }

    //     while(q.size() > 0){
    //         indices.push_back(q.front());
    //         q.pop();
    //         q.push(q.front());
    //         q.pop();
    //     }
    //     vector<int> ans(n,0);
    //     for(int i=0;i<n;i++){
    //         ans[indices[i]] = deck[i];
    //     }
    //     return ans;

    // }
};