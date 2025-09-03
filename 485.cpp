//https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
        int len = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1) len++;
            else len = 0;
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};