//https://leetcode.com/problems/same-tree/description/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr and q == nullptr) return true;
        if (p == nullptr or q == nullptr) return false;
        if(p->val != q->val) return false;
        return (isSameTree(p->left, q->left) and isSameTree(p->right, q->right));
    }
};