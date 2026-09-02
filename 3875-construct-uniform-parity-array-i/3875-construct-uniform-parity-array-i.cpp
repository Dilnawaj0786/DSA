class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0;
        int odd =0;
        int n = nums1.size();
        for(int x : nums1){
            if(x % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        if(even == n || odd == n)return true;

        bool Alleven = true;
        bool Allodd = true;
        int i=0;
        while(i < n){
            int j =0;
            bool even = false;
            bool odd = false;

            if(nums1[i] % 2 == 0){
                even = true;
            }else{
                odd = true;
            }
            while(j < n){
                if(i != j){
                    int diff = nums1[i]-nums1[j];
                    if(abs(diff) % 2 == 0){
                        even = true;
                    }else{
                        odd = true;
                    }
                }
                j++;
            }
            if(odd == false){
                Allodd = false;
            }

            if(even == false){
                Alleven = false;
            }
            i++;
        }
        if(Alleven || Allodd) return true;
        return false;
    }
};