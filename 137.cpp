//https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n-1; i+=3){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return nums.back();
    }
};