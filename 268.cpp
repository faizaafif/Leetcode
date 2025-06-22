//https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int total = 0;
        for(int i = 1; i < n+1; i++){
            total += i;
        }
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        return total-sum;
    }
};