//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int count = 0;
        for(int i = 1; i < n-1; i++){
            if((s[i] != s[i+1]) and (s[i] != s[i-1]) and (s[i-1] != s[i+1])) count++;
        }
        return count;
    }
};