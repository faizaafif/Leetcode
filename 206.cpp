//https://leetcode.com/problems/reverse-linked-list/description/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* future;
        while(curr){
            future = curr->next;
            curr->next = prev;
            prev = curr;
            curr = future;
        }
        return prev;
    }
};