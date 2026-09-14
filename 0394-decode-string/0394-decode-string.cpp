class Solution {
public:
    string helper(string& s, int& index){
        string result = "";
        while(index < s.size() && s[index] != ']'){
            if(isdigit(s[index])){
                int k =0;
                while(index < s.size() && isdigit(s[index])){
                    k = k* 10 + (s[index]-'0');
                    index++;
                }
                index++; // skip [
                string decoded = helper(s,index);
                index++;
                while(k >0 ){
                    result += decoded;
                    k--;
                }
            }else{
                result += s[index];
                index++;
            }
        }
        return result;
    }
    string decodeString(string s) {
        int index = 0;
        return helper(s, index);
    }
};