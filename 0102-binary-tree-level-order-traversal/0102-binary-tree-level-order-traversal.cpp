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
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    vector<int> helper(TreeNode* root, int n,vector<int>&temp , vector<vector<int>>&ans){
        if(root==NULL) return temp;
        if(n==1){
            temp.push_back(root->val);
            return temp;
        }
        helper(root->left,n-1,temp,ans);
        helper(root->right,n-1,temp,ans);
        return temp;
    }
    void traversal(TreeNode* root, int l,vector<vector<int>>&ans){
        for(int i=1;i<=l;i++){
            vector<int>v;
            helper(root,i,v,ans);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int l = levels(root);
        traversal(root,l,ans);
        return ans;
    }
};