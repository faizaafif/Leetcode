//https://leetcode.com/problems/linked-list-cycle/description/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr and fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};