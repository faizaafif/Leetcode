//https://leetcode.com/problems/sqrtx/description/

class Solution {
    public:
        int mySqrt(int x) {
            int low=0;
            int high=x;
            long long mid;
            while(low<=high){
                mid = low+(high-low)/2;
                if(mid*mid==x){
                    return mid;
                }
                else if(x>mid*mid){
                    low=mid+1;
                }
                else if(x<mid*mid){
                    high=mid-1;
                }
            }
            return high;
        }
        
};