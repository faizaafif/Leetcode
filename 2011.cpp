//https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(operations[i] == "++X" or operations[i] == "X++") sum +=1;
            else if (operations[i] == "--X" or operations[i] == "X--") sum -= 1;
        }
        return sum;
    }
};