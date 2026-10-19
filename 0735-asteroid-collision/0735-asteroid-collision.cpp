class Solution {
public:
    void reverse(vector<int>& ans){
        int i=0;
        int j=ans.size()-1;
        while(i<=j) swap(ans[i++],ans[j--]);
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] > 0) st.push(asteroids[i]);
            else{
                bool live = true;
                while(st.size() > 0 && st.top() > 0){
                    if(abs(asteroids[i]) > abs(st.top())){
                        st.pop();
                    }
                    else if(abs(asteroids[i]) == abs(st.top())){
                        st.pop();
                        live = false;
                        break;
                    }else{
                        live = false;
                        break;
                    }
                }
                if(live) st.push(asteroids[i]);
            }
        }

        while(st.size() > 0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans);
        return ans;
    }
};