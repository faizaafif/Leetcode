//https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        int c = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(') c++;
            else {
                if(i+1 < n and s[i + 1] == ')'){
                    i++;
                }
                else{
                    ans++;
                }
                if(c > 0) c--;
                else ans ++;
            }
        }
        ans += 2 * c;
        return ans;
    }
};