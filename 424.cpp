//https://leetcode.com/problems/longest-repeating-character-replacement/description/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int j = 0;
        int maxcount = 0;
        int x = 0;
        unordered_map<char, int> ans;
        for(int i = 0; i < n; i++){
            ans[s[i]]++;
            maxcount = max(maxcount, ans[s[i]]);
            while((i - j + 1 - maxcount) > k){
                ans[s[j]]--;
                j++;
            }
            x = max(x, i-j+1);
        }
        return x;
    }
};