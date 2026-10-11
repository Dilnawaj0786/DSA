class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        bool isempty = true;
        int k =0;
        for(int i=1;i<height.size();i++){
            if(height[i-1] > threshold){
                isempty = false;
                height[k++] = i;
            }
        }
        if(isempty) return {};
        height.resize(k);
        return height;
    }
};