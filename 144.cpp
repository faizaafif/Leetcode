//https://leetcode.com/problems/binary-tree-preorder-traversal/description/

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> temp;
        preorder(root,temp);
        return temp;
    }
    void preorder(TreeNode* root, vector<int>& temp){
        if (root == NULL) return;
        temp.push_back(root->val);
        preorder(root->left,temp);
        preorder(root->right,temp);
    }
};