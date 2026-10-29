//https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; i++) ans.push_back(v[i].first);
        return ans;
    }
};