//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pro = 1;
        int ld;
        while(n != 0){
            ld = n%10;
            sum += ld;
            pro *= ld;
            n /= 10;
        }
        return pro-sum;
    }
};