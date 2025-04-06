//https://leetcode.com/problems/valid-perfect-square/

class Solution {
    public:
        bool isPerfectSquare(int num) {
            int low=1;
            int high=num;
            long long mid;
            while(low<=high){
                mid=low+(high-low)/2;
                if(mid*mid==num){
                    return true;
                }
                else if(mid*mid>num){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return false;
        }
    };