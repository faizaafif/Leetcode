//https://leetcode.com/problems/power-of-four/description/

class Solution {
public:
    bool isPowerOfFour(int n) {
        int count = 0;
        if(n <= 0) return false;
        while(n != 0){
            if(n == 2 or n == 3) return false;
            if(n % 4 != 0) count++;
            n/=4;
        }
        return count == 1;
    }
};