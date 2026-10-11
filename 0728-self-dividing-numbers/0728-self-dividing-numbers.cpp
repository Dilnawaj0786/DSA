class Solution {
public:
    bool isvalid(int x){
        int y = x;
        while(y != 0){
            if(y % 10 == 0)  return false;
            if(x % (y % 10) != 0) return false;
            y /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(isvalid(i)) ans.push_back(i);
        }
        return ans;
    }
};