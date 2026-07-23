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
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void leftOrder(TreeNode* root, int n, vector<int>&temp){
        if(root==NULL) return; //no need to print
        if(n==1){
            temp.push_back(root->val);
            return;
        }
        leftOrder(root->left,n-1,temp); //left call
        leftOrder(root->right,n-1,temp); //right call
        // return temp;
    }
    void rightOrder(TreeNode* root, int n, vector<int>&temp){
        if(root==NULL) return; //no need to print
        if(n==1){
            temp.push_back(root->val);
            return;
        }
        rightOrder(root->right,n-1,temp); //right call
        rightOrder(root->left,n-1,temp); //left call
        // return temp;
        
    }
    void traversal(TreeNode* root, int l, vector<vector<int>>&ans){
        for(int i = 1;i<=l;i++){
            vector<int>temp;
            if(i%2!=0){ //odd ->simple order
                leftOrder(root,i,temp);
            }
            else{ //even ->reverse order
                rightOrder(root,i,temp);
            }
            ans.push_back(temp);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int l =levels(root);
        vector<vector<int>>ans;
        traversal(root,l,ans);
        return ans;
    }
};