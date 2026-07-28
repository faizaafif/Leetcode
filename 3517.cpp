//https://leetcode.com/problems/smallest-palindromic-rearrangement-i/

class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if(n <= 1) return s;
        string p1, p2;
        for(int i = 0; i < n/2; i++){
            p1.push_back(s[i]);
        }
        for(int i = (n + 1)/2; i < n; i++){
            p2.push_back(s[i]);
        }
        sort(p1.begin(), p1.end());
        sort(p2.begin(), p2.end());
        string pal = p1;
        if(n % 2 != 0) pal.push_back(s[n/2]);
        reverse(p2.begin(), p2.end());
        pal += p2;
        return pal;
    }
};