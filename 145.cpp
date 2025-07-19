//https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> temp;
        postorder(root, temp);
        return temp;
    }
    void postorder(TreeNode* root, vector<int>& temp){
        if(root == nullptr) return;
        postorder(root->left, temp);
        postorder(root->right, temp);
        temp.push_back(root->val);
    }
};