class Solution {
public:
    bool rotateString(string s, string goal) {
        // int n = s.size()-1;
        // if(s == goal) return true;
        // while( n > 0){
        //     reverse(s.begin()+1,s.end());
        //     reverse(s.begin(),s.end());
        //     if(s == goal) return true;
        //     n--;
        // }
        // return false;

        if(s.size() != goal.size()) return false;
        if( s == goal) return true;
        string temp = s+s;
        return (temp.find(goal) != -1);
    }
};