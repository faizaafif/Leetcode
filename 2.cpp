//https://leetcode.com/problems/add-two-numbers/description/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> s1, s2;
        while(l1) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2) {
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        while (!s1.empty() or !s2.empty() or carry != 0){
            int sum = carry;
            if(!s1.empty()){
                sum += s1.front();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.front();
                s2.pop();
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        return dummyHead->next;
    }
};