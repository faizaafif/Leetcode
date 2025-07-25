//https://leetcode.com/problems/transform-array-by-parity/

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0) arr.push_back(0);
            else arr.push_back(1);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};