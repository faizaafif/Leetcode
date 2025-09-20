//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int ld;
        for(int i = 0; i < n; i++){
            int temp = nums[i];
            int c = 0;
            while(temp != 0){
                ld = temp % 10;
                c++;
                temp /= 10;
            }
            if(c % 2 == 0) count++;
        }
        return count;
    }
};