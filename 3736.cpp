//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = nums[n-1];
        int c = 0;
        for(int i = 0; i < n-1; i++){
            int diff = maxi - nums[i];
            c += diff;
        }
        return c;
    }
};