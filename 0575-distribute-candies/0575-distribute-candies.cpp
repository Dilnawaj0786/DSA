class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int numofcandy = 1;
        int n = candyType.size();
        vector<int> check(200001,true);
        n /= 2;
        n--;
        int x = candyType[0] + 100000;
        check[candyType[0] + 100000] = false;
        for(int i=1;i<candyType.size();i++){
            if(check[candyType[i]+ 100000] == false) continue;
            if(n == 0) break;
            if((candyType[i]+ 100000) != x){
                numofcandy++;
                n--;
                x = candyType[i]+100000;
                check[candyType[i]+ 100000] = false;
            }
        }
        return numofcandy;
    }
};