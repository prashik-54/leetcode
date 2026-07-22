class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case: if we reach a null node, or find either p or q
        if (root == NULL || root == p || root == q) {
            return root;
        }
        
        // Look for p and q in the left and right subtrees
        TreeNode* leftResult = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightResult = lowestCommonAncestor(root->right, p, q);
        
        // If p is found on one side and q on the other, this node is the LCA
        if (leftResult != NULL && rightResult != NULL) {
            return root;
        }
        
        // Otherwise, return the non-null side (where both or one node was found)
        return (leftResult != NULL) ? leftResult : rightResult;
    }
};
