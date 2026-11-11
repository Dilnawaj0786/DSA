class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long mn = min(need1,need2);
        long long mx = max(need1,need2);
        long long CostA = (1LL*cost1*need1 + 1LL*cost2*need2);
        long long CostB = (mn*costBoth + (need1-mn)*cost1 + (need2-mn)*cost2);
        long long CostC = (mx*costBoth);
        return min(min(CostA,CostB),CostC);
    }
};