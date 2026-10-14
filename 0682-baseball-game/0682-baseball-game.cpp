class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int> x;
        for(int i=0;i<s.size();i++){
            if(s[i] == "+"){
                int a = x.top();
                x.pop();
                int b = x.top();
                x.push(a);
                x.push(a+b);

            }
            else if(s[i] == "D"){
                int y = x.top();
                y *= 2;
                x.push(y);
            }
            else if(s[i] == "C"){
                x.pop();
            }else{
                int n = stoi(s[i]);
                x.push(n);
            }
        }

        int sum =0;
        while(x.size() > 0){
            sum += x.top();
            x.pop();
        }
        return sum;
    }
};