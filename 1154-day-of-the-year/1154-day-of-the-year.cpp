class Solution {
public:
    void reverse(string& x){
        int i=0;
        int j = x.size()-1;
        while(i<=j) swap(x[i++],x[j--]);
    }
    int dayOfYear(string date) {
        int sum  = 0;
        int dates = 0;
        int month = 0;
        int year = 0;
        string z = "";
        string x = "";
        string y = "";
        int j =date.size()-1;
        while(date[j] != '-') x.push_back(date[j--]);
        j--;
        while(date[j] != '-') y.push_back(date[j--]);
        j--;
        while(j>=0) z.push_back(date[j--]);
        reverse(x);
        reverse(y);
        reverse(z);
        dates = stoi(x);
        month = stoi(y);
        year = stoi(z);
        sum += dates;
        for(int i=1;i<month;i++){
            if(i == 2) sum += 28;
            else if(i % 2 == 0 && i<8){
                sum += 30;
            }else if(i % 2 != 0 && i<8){
                sum += 31;
            }else if(i > 7 && i % 2 == 0){
                sum += 31;
            }else{
                sum += 30;
            }
        }

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            if(month > 2){
                sum++;
            } 
        }
        return sum;


    }
};