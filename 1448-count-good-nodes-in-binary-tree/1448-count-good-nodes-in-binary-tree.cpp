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
    void dfs(TreeNode* root , int &count , int tillMaxele){
        if(root==NULL) return;
        if(root->val >= tillMaxele){
            count++;
            tillMaxele = root->val;
        }
        dfs(root->left , count , tillMaxele);
        dfs(root->right, count, tillMaxele);

    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        int tillMaxele = INT_MIN;
        dfs(root , count , tillMaxele);
        return count;
        
    }
};