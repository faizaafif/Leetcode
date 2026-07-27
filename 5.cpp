//https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n <= 1) return s;
        int start = 0, maxlen = 1;
        int l, r;
        for(int i = 0; i < n; i++){
            l = i;
            r = i;
            while(l >= 0 and r < n and s[l] == s[r]){
                if(r - l + 1 > maxlen){
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while(l >= 0 and r < n and s[l] == s[r]){
                if(r - l + 1 > maxlen){
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,maxlen);
    }
};