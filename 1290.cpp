//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int sum = 0;
        vector<int> arr;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        for(int i = 0; i < n; i++){
            sum += arr[i] * pow(2,n-i-1);
        }
        return sum;
    }
};