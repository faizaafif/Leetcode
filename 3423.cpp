//https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n;
        int maxdist = 0;
        int next;
        for(int i=0; i<nums.size(); i++){
            next = (i+1) % nums.size();
            n = abs(nums[i] - nums[next]);
            if(n > maxdist) maxdist = n;
        }
        return maxdist;
    }
};