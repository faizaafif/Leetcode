//https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/

class Solution {
    public:
        int countKDifference(vector<int>& nums, int k) {
            int count=0;
            for(int i=0; i<nums.size(); i++){
                for (int j=i+1; j<nums.size(); j++){
                    if(nums[i]>nums[j]){
                        if(nums[i]-nums[j]==k){
                            count++;
                        }
                    }
                    else{
                        if(nums[j]-nums[i]==k){
                            count++;
                        }
                    }
                }
            }
            return count;
        }
        
    };