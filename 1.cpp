//https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            int sum;
            for(int i=0; i<n; i++){
                for(int j=1; j<n; j++){
                    sum=nums[i]+nums[j];
                    if(sum==target && i!=j){
                        return {i,j};
                    }
                }
            }
            return {};
        }
    };