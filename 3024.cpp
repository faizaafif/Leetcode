//https://leetcode.com/problems/type-of-triangle/description/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a,b,c;
        a = nums[0];
        b = nums[1];
        c = nums[2];
        if((a+b>c) and (a+c>b) and (b+c>a)){
            if((a == b) and (a == c) and (b == c)) return "equilateral";
            else if((a == b) or (a == c) or (b == c)) return "isosceles";
            else if((a != b) and (a !=c ) and (b != c)) return "scalene";
        }
        return "none";
    }
};