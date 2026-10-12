class Solution {
public:
    int maxProduct(int n) {
        int firstmax = n % 10;
        int secondmax = 1;
        n /= 10;
        while(n != 0){
            int rem = n % 10;
            if(rem >= firstmax){
                secondmax = firstmax;
                firstmax = rem;
            }else if(rem > secondmax){
                secondmax = rem;
            }
            n /= 10;
        }

        return firstmax * secondmax;

    }
};