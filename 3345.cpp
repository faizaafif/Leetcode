//https://leetcode.com/problems/smallest-divisible-digit-product-i/

class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = n;
        while(true){
            long long prod = 1;
            while(temp > 0){
                int num = temp % 10;
                prod *= num;
                temp /= 10;
            }
            if(prod % t == 0) return n;
            else{
                while(true){
                    n++;
                    int temp = n;
                    long long prod = 1;
                    while(temp > 0){
                        int num = temp % 10;
                        prod *= num;
                        temp /= 10;
                    }
                    if(prod % t == 0) return n;
                }
            }
        }
    }
};