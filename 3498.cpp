//https://leetcode.com/problems/reverse-degree-of-a-string/

class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int num = 'z' - s[i] + 1;
            ans += (i+1) * num;
        }
        return ans;
    }

};