class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count[10] = {0};
        for (int d : digits) count[d]++;
        
        int result = 0;
        for (int h = 1; h <= 9; h++) {
            for (int t = 0; t <= 9; t++) {
                for (int u = 0; u <= 8; u += 2) {
                    int used[10] = {0};
                    used[h]++;
                    used[t]++;
                    used[u]++;
                    
                    bool valid = true;
                    for (int digit = 0; digit <= 9; digit++) {
                        if (used[digit] > count[digit]) {
                            valid = false;
                            break;
                        }
                    }
                    
                    if (valid) result++;
                }
            }
        }
        
        return result;
    }
};