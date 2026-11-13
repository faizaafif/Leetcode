//https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<int> ans;
        unordered_map<char, int> mp1, mp2;
        for(int i = 0; i < m; i++){
            mp2[p[i]]++;
        }
        for(int i = 0; i < m; i++){
            mp1[s[i]]++;
        }
        if(mp1 == mp2) ans.push_back(0);
        for(int i = m; i < n; i++){
            mp1[s[i - m]]--;
            if(mp1[s[i - m]] == 0) mp1.erase(s[i - m]);
            mp1[s[i]]++;
            if(mp1 == mp2) ans.push_back(i - m + 1);
        }
        return ans;
    }
};