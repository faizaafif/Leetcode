//https://leetcode.com/problems/search-in-a-binary-search-tree/description/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr) return nullptr;
        else if (val == root->val) return root;
        else if (val < root->val) return searchBST(root->left, val);
        else if (val > root->val) return searchBST(root->right, val);
        return nullptr;
    }
};