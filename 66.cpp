//https://leetcode.com/problems/plus-one/description/

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            vector <int> arr;
            int n = digits.size()-1;
            for(int i=n; i>-1; i--){
                if(digits[i] == 9){
                    digits[i] = 0;
                }
                else{
                    digits[i] = digits[i] + 1;
                    return digits;
                }
            }
            digits.insert(digits.begin(),1);
            return digits;
        }
    };