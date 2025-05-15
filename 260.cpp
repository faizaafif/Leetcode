//https://leetcode.com/problems/single-number-iii/description/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> arr;
        for(int i=0; i<n; i++){
            if(i== n-1 || nums[i] != nums[i+1]){
                arr.push_back(nums[i]);
            }
            else i++;
        }
        return arr;
    }
};