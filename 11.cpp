//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int curr = 0;
        int h;
        while (left < right) {
            int width = right - left;
            h = min(height[left], height[right]);
            int area = h * width;
            curr = max(curr, area);
            if (height[left] < height[right])
                left++;
            else right--;
        }
        return curr;
    }
};