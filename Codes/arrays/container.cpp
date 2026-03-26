class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int w;
        int h;
        int a;
        int maxwater = INT_MIN;
        for(int i = 0; i < n; i ++){
            for(int j = i + 1; j < n; j++){

                w = j - i;
                h = min(height[i],height[j]);
                a = h * w;
                maxwater = max(maxwater, a);
            }

        }

        return maxwater;
        
        
        
    }
};  