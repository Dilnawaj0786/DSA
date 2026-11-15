class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int emp = 0;
        for(int hour : hours) if(hour >= target) emp++;
        return emp;
    }
};