//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int maxi = 0, c = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(') {
                c++;
                maxi = max(maxi, c);
            }
            else if(s[i] == ')'){
                c--;
            }
        }
        return maxi;
    }
};