/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Helper function to calculate the total height/number of levels in the tree
    int levels(TreeNode* root){
        // Base case: An empty tree has 0 levels
        if(root == NULL) return 0;
        
        // Recursively find the depth of left and right subtrees, then add 1 for the current node
        return 1 + max(levels(root->left), levels(root->right));
    }

    // Helper function to collect all node values located at a specific target level (n)
    vector<int> helper(TreeNode* root, int n, vector<int>& temp){
        // Base case: If the current node is null, do nothing and return the accumulator
        if(root == NULL) return temp;
        
        // If we have decremented n down to 1, we have successfully reached the target level
        if(n == 1){
            temp.push_back(root->val); // Add the node's value to our level vector
            return temp;
        }
        
        // Continue traversing down to the next lower level (n - 1)
        helper(root->left, n - 1, temp);  // Traverse left subtree
        helper(root->right, n - 1, temp); // Traverse right subtree
        
        return temp;
    }

    // Driver function to loop through every level index and extract its elements
    void traversal(TreeNode* root, int l, vector<vector<int>>& ans){
        // Loop from the 1st level up to the total height 'l'
        for(int i = 1; i <= l; i++){
            vector<int> v; // Temporary vector to hold values for the current level 'i'
            
            helper(root, i, v); // Fetch all values at level 'i' (corrected parameters)
            ans.push_back(v);   // Push the completed level vector into our main answer matrix
        }
    }

    // Main entry point for the Level Order Traversal problem
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; // Matrix to store the final list of levels
        
        int l = levels(root);    // Step 1: Calculate the depth of the tree
        traversal(root, l, ans); // Step 2: Extract data level-by-level
        
        return ans;              // Step 3: Return the accumulated results
    }
};
