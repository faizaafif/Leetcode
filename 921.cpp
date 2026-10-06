//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0, ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                c++;
            } 
            else{
                if(c > 0) c--;
                else ans++;
            }
        }
        return (c + ans);
    }
};