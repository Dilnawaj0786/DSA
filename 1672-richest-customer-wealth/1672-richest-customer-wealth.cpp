class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highest_wealth = 0;
        int customers = accounts.size();
        int banks = accounts[0].size();
        for(int i=0;i<customers;i++){
            int current_wealth = 0;
            for(int j=0;j<banks;j++){
                current_wealth += accounts[i][j];
            }
            highest_wealth = max(highest_wealth,current_wealth);
        }
        return highest_wealth;
    }
};