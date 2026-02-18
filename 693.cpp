//https://leetcode.com/problems/binary-number-with-alternating-bits/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int c0 = 0, c1 = 0;
        while(n){
            if(n & 1 == 1){
                c1++;
                c0 = 0;
            }
            else{
                c0++;
                c1 = 0;
            }
            if(c0 > 1 or c1 > 1) return false;
            n = n>>1;
        }
        return true;
    }
};