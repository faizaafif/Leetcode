//https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/

class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string ans;
        for(int i = 0; i < n; i++){
            if(s[i] != s[i+1]) ans.push_back(s[i]);
            else{
                if(s[i+1] != s[i+2]) ans.push_back(s[i]);
            }
        }
        return ans;
    }
};