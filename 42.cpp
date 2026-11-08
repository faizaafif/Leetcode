//https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int c = 0;
        vector<int> maxright(n); 
        vector<int> maxleft(n);
        maxright[n - 1] = height[n - 1];  
        maxleft[0] = height[0];
        for(int i = 1; i < n; i++){
            maxleft[i] = max(height[i], maxleft[i-1]);
        }
        for(int i = n - 2; i >= 0; i--){
            maxright[i] = max(height[i], maxright[i+1]);
        }
        for(int i = 0; i < n; i++){
            c += min(maxright[i], maxleft[i]) - height[i];
        }
        return c;
    }
};