//https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(n);
        pref[0] = nums[0];
        unordered_map<int, int> mp;
        int c = 0;
        mp[0] = 1;
        for(int i = 0; i < n; i++){
            if(i > 0) pref[i] = pref[i-1] + nums[i];
            int diff = pref[i] - k;

            if(mp.find(diff) != mp.end()) c += mp[diff];
            mp[pref[i]]++;
        }
        return c;
    }
};