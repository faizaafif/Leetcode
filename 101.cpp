//https://leetcode.com/problems/symmetric-tree/description/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return symmetric(root->left, root->right);
    }

    bool symmetric(TreeNode* x, TreeNode* y){
        if(x == nullptr and y == nullptr)return true;
        if(x == nullptr or y == nullptr)return false;
        if(x->val != y->val) return false;
        return symmetric(x->left,y->right) and symmetric(x->right, y->left);
    }
};