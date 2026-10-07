class Solution {
public:
    void reverse(string& word,int i,int j){
        while(i <= j) swap(word[i++],word[j--]);
    }
    string reversePrefix(string word, char ch) {
        int j =0;
        bool flag = false;
        for(int i=0;i<word.size();i++){
            if(word[i] == ch){
                j++;
                flag = true;
                break;
            }
            j++;
        }
        if(!flag) return word;
        reverse(word,0,j-1);
        return word;
    }
};