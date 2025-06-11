//https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* temp = head;
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1->val < curr2->val){
                temp->next = curr1;
                curr1 = curr1->next;
            }
            else{
                temp->next = curr2;
                curr2 = curr2->next;
            }
            temp = temp->next;
        }

        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1->val < curr2->val){
                temp->next = curr1;
                temp = curr1;
                curr1 = curr1->next;
            }
            else{
                temp->next = curr2;
                temp = curr2;
                curr2 = curr2->next;
            }
        }
        if (curr1 == nullptr){
            temp->next = curr2;
        }
        else if(curr2 == nullptr){
            temp->next = curr1;
        }
        return head->next;
    }
};