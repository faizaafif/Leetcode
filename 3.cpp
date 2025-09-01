//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int j = 0, x = 0;
        unordered_map<char, int> ans;
        for(int i = 0; i < n; i++){
            ans[s[i]]++;
            while(ans[s[i]] > 1){
                ans[s[j]]--;
                if(ans[s[j]] == 0) ans.erase(s[j]);
                j++;
            }
            x = max(x, i - j + 1);
        }
        return x;
    }
};