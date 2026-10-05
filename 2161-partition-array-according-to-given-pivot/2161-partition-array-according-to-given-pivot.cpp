class Solution {
public:
    vector<int> add(vector<int>& a, vector<int>& b){
        for(int ele : b) a.push_back(ele);
        return a;
    }
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int ele : nums){
            if(ele < pivot) a.push_back(ele);
            else if(ele == pivot) b.push_back(ele);
            else c.push_back(ele);
        }

        a = add(a,b);
        a = add(a,c);
        return a;

    }
};