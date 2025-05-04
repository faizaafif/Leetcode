//https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/?source=submission-noac

class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int count = 0;
            for(int i=0; i<= nums.size()-3; i++){
                if((nums[i]+nums[i+2])*2 == nums[i+1] ){
                    count++;
                }
            }
            return count;
        }
    };