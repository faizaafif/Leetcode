//https://leetcode.com/problems/valid-palindrome/description/

class Solution {
    public:
        bool isPalindrome(string s) {
            string x="", temp="";
            int len = s.length();
            for (int i=0; i<len; i++){
                if (s[i] >= 'A' and s[i] <='Z') temp += (s[i]+32);
                else if(s[i]>='a' and s[i]<='z') temp += s[i];
                else if(s[i]>='0' and s[i]<='9') temp += s[i];
            }
            int l = temp.length();
            for (int i=0; i<l; i++) x += temp[l-i-1];
            return x == temp;
        }
    };