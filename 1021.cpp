//https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int c1 = 0, c2 = 0;
        string ans;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                c1++;
                if(c1 > 1) ans.push_back(s[i]);
            }
            else{
                c2++;
                if (c1 != c2) ans.push_back(s[i]);
            } 
            if (c1 == c2){
                c1 = 0;
                c2 = 0;
            }
        }
        return ans;
    }
};