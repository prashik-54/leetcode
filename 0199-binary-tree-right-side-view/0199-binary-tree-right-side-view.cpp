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
        return 1 + max(levels(root->left), levels(root->right));
    }
    void bfs(TreeNode* root, int n, vector<int>&v){
        if(root==NULL) return;
        if(n==1){
            v.push_back(root->val);
        }
        bfs(root->left, n-1, v);
        bfs(root->right, n-1, v);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level = levels(root);

        vector<int>ans;
        for(int i =1 ;i<=level;i++){
            vector<int>v;
            bfs(root ,i,v);
            int n = v.size();
            ans.push_back(v[n-1]);
        }
       return ans;
    }
};