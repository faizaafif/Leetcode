//https://leetcode.com/problems/palindrome-number/description/

class Solution {
    public:
        bool isPalindrome(int x) {
            double sum=0;
            int temp = x;
            if (x < 0){
                return false;
            }
            while(temp != 0){
                sum = sum*10 + temp % 10;
                temp = temp / 10;
            }
            if(sum == x)   {
                return true;
            }
            return false;
        }
    };