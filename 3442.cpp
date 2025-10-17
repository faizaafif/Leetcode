//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/

class Solution {
public:
    int maxDifference(string s) {
        int maxi = 0, mini = INT_MAX;
        int freq1 = 0, freq2 = 0;
        unordered_map<char, int> freq;
        vector<int> even;
        vector<int> odd;
        for(auto i : s) freq[i]++;
        for(auto i : freq){
            int count = i.second;
            if(count % 2) odd.push_back(count);
            else even.push_back(count);
        }
        for(auto i : odd) maxi = max(maxi, i);
        for(auto i : even) mini = min(mini, i);
        return maxi - mini;
    }
};