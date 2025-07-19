//https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> temp;
        inorder(root,temp);
        return temp;
    }
    void inorder(TreeNode* root, vector<int>& temp){
        if(root == nullptr) return;
        inorder(root->left, temp);
        temp.push_back(root->val);
        inorder(root->right, temp);
    }
};