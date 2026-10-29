class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        for(int i=0;i<senate.size();i++){
            if(senate[i] == 'R') R.push(i);
            else D.push(i);
        }
        int n = senate.size();
        int idx = n;
        while(R.size() > 0 && D.size()>0){
            if(R.front() < D.front()) R.push(idx++);
            else  D.push(idx++);
            D.pop();
            R.pop();
        }
        return (R.size() == 0) ? "Dire" : "Radiant";

    }
};