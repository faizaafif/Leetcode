//https://leetcode.com/problems/power-of-three/description/

class Solution {
public:
    bool isPowerOfThree(int n) {
        int count = 0;
        if(n <= 0) return false;
        while(n != 0){
            if (n == 2) return false;
            if(n % 3 != 0) count++;
            n = n/3;
        }
        return count == 1;
    }
};