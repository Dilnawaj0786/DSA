class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double sum = 0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        double average = (sum/k);
        for(int i=k;i<arr.size();i++){
            sum -= arr[i-k];
            sum += arr[i];
            double avg = sum /k;
            average = max(avg,average);
        }
        return average;
    }
};