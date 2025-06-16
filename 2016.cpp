//https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int diff = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                diff = max(diff,nums[j]-nums[i]);
            }
        }
        if(diff == 0) return -1;
        return diff;
    }
};