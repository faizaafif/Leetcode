//https://leetcode.com/problems/search-insert-position/description/

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int low=0;
            int high=nums.size()-1;
            long long mid;
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[mid]>target){
                    high=mid-1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }
                else{
                    return mid;
                }
            }
            return low;
        }
    };