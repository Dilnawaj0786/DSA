class Solution {
public:
    string reorderSpaces(string text) {
        string ans = "";
        int i=0;
        int spaces = 0;
        int words = 0;
        while(i<text.size()){
            if(text[i] ==' ') {
                spaces++;
                i++;
            }
            else{
                while(i< text.size() && text[i] != ' '){
                    i++;
                }
                words++;
            }
        }

        int x = (words == 1) ? 0 : spaces / (words - 1);
        int rem = (words == 1) ? spaces : spaces % (words - 1);
        int j =0;
        int wordIndex = 0;
        while(j < text.size()){
            if(text[j] == ' ') j++;
            else{
                while(j<text.size() && text[j] != ' '){
                    ans.push_back(text[j]);
                    j++;
                }
                wordIndex++;
                if(wordIndex < words){
                    int c = x;
                    while(c != 0){
                        ans.push_back(' ');
                        c--;
                    }
                }
            }
        }
        while(rem != 0){
            ans.push_back(' ');
            rem--;
        }
        return ans;
    }
};