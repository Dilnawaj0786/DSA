class Solution {
public:
    bool isdigit(char ch){
        if((int) ch >= 48 && (int)ch <= 57) return true;
        return false;
    }
    bool isop(char ch){
        if(ch == '+' || ch == '-') return true;
        return false;
    }
    long long perform(long long a, long b, char ch){
        if(ch == '+') return a +b;
        if(ch == '-') return a - b;
        return 0;
    }

    void execute(stack<long long>& nums, stack<char>& operators){
        long long b = nums.top();
        nums.pop();
        long long a = nums.top();
        nums.pop();
        long long x = operators.top();
        long long res = perform(a,b,x);
        operators.pop();
        nums.push(res);
    }
    int calculate(string s) {
        stack<long long> nums;
        stack<char> operators;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == ' ') continue;
            if(ch == '(') operators.push(ch);
            else if(isdigit(ch)){
                long long nm = 0;
                while(i <s.size() && isdigit(s[i])){
                    nm = nm * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                nums.push(nm);
                while(!operators.empty() && operators.top() != '('){
                    execute(nums, operators);
                }
            }else if(isop(ch)){
                int j = i - 1;
                while(j >= 0 && s[j] == ' ') j--;
                if(j < 0 || s[j] == '(') nums.push(0);
                operators.push(ch);
            }else if(ch == ')'){
                while(!operators.empty() && operators.top() != '('){
                    execute(nums, operators);
                }
                if(!operators.empty()) operators.pop();
                while(!operators.empty() && operators.top() != '('){
                    execute(nums, operators);
                }
            }
            
        }
        while(!operators.empty() && operators.top() != '('){
            execute(nums, operators);
        }
        return nums.top();
    }
    
};
