//https://leetcode.com/problems/minimum-size-subarray-sum/description/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int x = INT_MAX;
        int sum = 0;
        for(int last = 0; last < n; last++){
            sum += nums[last];
            while(sum >= target){
                x = min(last - first + 1, x);
                sum -= nums[first];
                first++;
            }
        }
        if(x == INT_MAX) return 0;
        else return x;
    }
};