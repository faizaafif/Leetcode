//https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        vector<int> arr;
        for(int i = 0; i < n-1; i++){
            if(nums[i] != nums[i+1]) arr.push_back(nums[i]);
        }
        arr.push_back(nums[n-1]);
        for(int i = 1; i < arr.size()-1; i++){
            if(arr[i-1] < arr[i] and arr[i+1] < arr[i]) c++;
            if(arr[i-1] > arr[i] and arr[i+1] > arr[i]) c++;
        }
        return c;
    }
};