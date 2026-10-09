class Solution {
public:
    int countOperations(int num1, int num2) {
        int op = 0;
        if(num1 == 0 || num2 == 0) return 0;
        while(true){
            (num1 > num2) ? num1 = num1-num2 : num2 = num2-num1;
            op++;
            if(num1 == 0 || num2 == 0) return op;
        }
        return 0;
    }
};