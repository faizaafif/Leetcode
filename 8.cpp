//https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        int sign = 1;
        long long num = 0;
        int digit;
        while(i < n and s[i] == ' '){
            i++;
        }
        // if(i < n and (s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z')) return 0;
        if(i < n and (s[i] == '-' or s[i] == '+')){
            if(s[i] == '-') sign = -1;
            else sign = 1;
            i++;
        }
        while (i < n and (s[i] >= '0' and s[i] <= '9')){
            digit = s[i] - '0';
            if(num > INT_MAX/10){
                if(sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            if(num == INT_MAX/10){
                if(sign == 1 and digit > 7) return INT_MAX;
                else if(sign == -1 and digit > 8) return INT_MIN;
            }
            num = num * 10 + digit;
            i++;
        }
        if(sign == -1) num *= -1;
        return num;
    }
};