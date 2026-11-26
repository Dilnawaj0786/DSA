class Solution {
public:
    bool canAliceWin(int n) {
        int x = 10;
        int count = 1;
        while(n >= x){
            n -= x;
            x--;
            count++;
        }

        return (count % 2 != 0) ? false : true;

    }
};