class Solution {
public:
    void perform(stack<int>& ans,int n,char ch){
        
        if(ch == '*'){
            int x = ans.top();
            ans.pop();
            ans.push(x*n);
        } 
        else if(ch == '/'){
            int x = ans.top();
            ans.pop();
            ans.push(x/n);
        } 
        else if(ch == '+') ans.push(n);
        else ans.push(-n);
    }
    int clumsy(int n) {
        stack<int> ans;
        ans.push(n);
        int i = n-1;
        while(i >= 1){
            if(i>= 1) perform(ans,i,'*');
            i--;
            if(i>= 1) perform(ans,i,'/');
            i--;
            if(i>= 1) perform(ans,i,'+');
            i--;
            if(i>= 1) perform(ans,i,'-');
            i--;
        }
        int res = 0;
        while(ans.size() > 0){
            res += ans.top();
            ans.pop();
        }
        return res;
    }
};