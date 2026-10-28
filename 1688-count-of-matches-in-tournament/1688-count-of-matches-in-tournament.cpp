class Solution {
public:
    int matches =0;
    int numberOfMatches(int n) {
        if(n == 1) return matches;
        int no_of_matches = (n % 2 == 0) ? (n/2) : (n-1)/2;
        matches += no_of_matches;
        if(n % 2 == 0){
            int advance = n/2;
            return numberOfMatches(advance);
        }else{
            int advance = ((n-1)/2) + 1;
            return numberOfMatches(advance);
        }
    }
};