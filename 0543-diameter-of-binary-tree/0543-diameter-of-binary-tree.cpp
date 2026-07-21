/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDia = 0; //global veriable
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = 1 + max(levels(root->left), levels(root->right));
        return l;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = levels(root->left) + levels(root->right);
        maxDia = max(maxDia, l);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
    }
};