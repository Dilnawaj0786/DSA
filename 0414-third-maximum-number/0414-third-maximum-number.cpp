class Solution {
public:
    int thirdMax(vector<int>& num) {
    int n = num.size();
    long long max_ele = LLONG_MIN;
    long long sec_ele = LLONG_MIN;
    long long third_ele = LLONG_MIN;

    for(int i=0;i<n;i++){
        if(num[i] > max_ele) max_ele = num[i];
    }

    for(int i=0;i<n;i++){
        if(sec_ele < num[i] && num[i] != max_ele) sec_ele = num[i];
    }

    for(int i=0;i<n;i++){
        if(third_ele < num[i] && (num[i] < sec_ele)) third_ele = num[i];
    }
    if(sec_ele == LLONG_MIN) return max_ele;
    else if(third_ele == LLONG_MIN) return max(sec_ele,max_ele);
    else return third_ele;
    }
};