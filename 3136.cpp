//https://leetcode.com/problems/valid-word/description/

class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        if(n < 3) return false;
        int c = 0, v = 0;
        for(int i = 0; i < n; i++){
            char ch = tolower(word[i]);
            if(!isalnum(ch)) return false;
            if(isalpha(ch)){
                if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') v = 1;
                else c = 1;
            }
        }
        if(c == 1 and v == 1) return true;
        return false;
    }
};