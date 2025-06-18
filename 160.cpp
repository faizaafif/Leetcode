//https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* skipA = headA;
        ListNode* skipB = headB;
        if (headA == nullptr or headB == nullptr) return nullptr;
        while(skipA != skipB){
            if(skipA == nullptr) skipA = headB;
            else skipA = skipA->next;
            if(skipB == nullptr) skipB = headA;
            else skipB = skipB->next;
        }
        return skipB;
    }
};