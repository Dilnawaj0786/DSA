class Solution {
public:
    string getBinary(int x){
        string ans ="";
        while( x != 1){
            int r = x % 2;
            ans.push_back(r+'0');
            x /= 2;
        }
        ans.push_back(1+'0');
        reverse(ans.begin(),ans.end());
        return ans;

    }
    string convertDateToBinary(string date) {
        string y ="";
        string x ="";
        for( int i=0;i<date.size();i++){
            if(date[i] == '-'){
                int num = stoi(x);
                y += getBinary(num);
                y.push_back(date[i]);
                x = "";
            }else{
                x.push_back(date[i]);
            }
        }
        if(!x.empty()){
            int num = stoi(x);
            y += getBinary(num);
        }
        return y;
    }
};