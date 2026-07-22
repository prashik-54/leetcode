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
    void helper(TreeNode* root, string s, vector<string>& ans){
        //base condition
        if(root==NULL) return; //it is not leaf node
        string currVal = to_string(root->val);
        if(root->left==NULL && root->right==NULL){ //main base condition
            //ans me string ko push krna he 
            ans.push_back(s+currVal);
            return;
        }
        
        helper(root->left, s+currVal+"->", ans);
        helper(root->right, s+currVal+"->", ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);
        return ans;
    }
};