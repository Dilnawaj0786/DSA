class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxe = -1;
        for(int ele : nums) maxe = max(ele,maxe);
        int moves = 0;
        for(int ele : nums) if(ele != maxe) moves += (maxe-ele);
        return moves;
    }
};