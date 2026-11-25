class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() == 2) return (skill[0]*skill[1]);
        sort(skill.begin(),skill.end());
        int st = 0;
        bool isvalid = true;
        int end = skill.size()-1;
        int x = skill[st++] + skill[end--];
        while(st<end){
            int y = skill[st++] + skill[end--];
            if(x != y) return -1;
        }
        long long ans = 0;
        st = 0;
        end = skill.size()-1;
        while(st<end){
            ans += (skill[st++] * skill[end--]);
        }
        return ans;
        
    }
};