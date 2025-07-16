//https://leetcode.com/problems/left-and-right-sum-differences/description/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n,0);
        vector<int> rightsum(n,0);
        vector<int>ans(n);
        leftsum[0] = 0;
        rightsum[n-1] = 0;
        for(int i = 0; i < n-1; i++){
            leftsum[i+1] = leftsum[i] + nums[i];
        }
        for(int i = n-1; i > 0; i--){
            rightsum[i-1] = rightsum[i] + nums[i];
        }
        for(int i = 0; i < n; i++){
            ans[i] = abs(leftsum[i] - rightsum[i]);
        }        
        return ans;
    }
};