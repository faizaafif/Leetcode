//https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;
        while(temp != nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        while(!st.empty() and head != nullptr){
            if(st.top() != head->val){
                return false;
            }
            st.pop();
            head = head->next;
        }
        return true;
    }
};