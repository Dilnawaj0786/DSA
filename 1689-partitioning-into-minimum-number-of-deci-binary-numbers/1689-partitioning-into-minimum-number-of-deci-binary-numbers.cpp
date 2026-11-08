class Solution {
public:
    int minPartitions(string n) {
        int maxe = -1;
        for(char ch : n){
            if(maxe == 9) return maxe;
            if(ch-'0' > maxe) maxe = ch-'0';
        }
        return maxe;
    }
};