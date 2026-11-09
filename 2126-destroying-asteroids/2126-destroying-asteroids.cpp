class Solution {
public:
    bool asteroidsDestroyed(int wt, vector<int>& asteroids) {
        long long mass = wt;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] <= mass){
                mass += asteroids[i];
                asteroids[i] = 0;
            }else{
                mass = 0;
                if(mass == 0 && i != asteroids.size()-1) return false;
            }
        }
        for(int ele : asteroids) if(ele != 0) return false;
        return true;
    }
};