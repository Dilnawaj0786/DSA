class Solution {
public:
    int strStr(string haystack, string needle) {
       int idx  = -1;
       int i=0;
       int j =0;
       bool check = false;
       while(j < haystack.size() && i < needle.size()){
            if(haystack[j] == needle[i]){
                if(i == 0){
                    idx = j;
                }
                check = true;
                
                i++;
                j++;
            }else{
                if(i > 0){
                    j = idx+1;
                }else{
                    j++;
                }
                check = false;
                i = 0;
                idx = -1;
            }
       }
      if(i >= needle.size()){
        return idx;
      }else{
        return -1;
      }
    }
};