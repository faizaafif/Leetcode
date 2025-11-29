//https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        while(sum % k != 0){
            sum--;
            count++;
        }
        return count;
    }
};