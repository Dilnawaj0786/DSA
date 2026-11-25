class Solution {
public:
    int getpower(int x){
        int power = 0;
        while(x != 1){
            if(x% 2 == 0){
                x /= 2;
            }else{
                x *= 3;
                x += 1;
            }
            power++;
        }
        return power;
    }
    int getKth(int lo, int hi, int k) {
        priority_queue<pair<int,int>> ans;
        for(int i=lo;i<=hi;i++){
            int pw = getpower(i);
            ans.push({pw,i});
            if(ans.size() > k) ans.pop();
        }
        return ans.top().second;

    }
};