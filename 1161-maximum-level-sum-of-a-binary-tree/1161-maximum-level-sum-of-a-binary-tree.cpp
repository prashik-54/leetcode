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
    int bfs(TreeNode* root, int n , int &sum){
        if(root==NULL) return 0;
        if(n==1){
            sum+=(root->val);
        }
        bfs(root->left, n-1, sum);
        bfs(root->right, n-1, sum);
        return sum;
    }
    int maxLevelSum(TreeNode* root) {
        int level = levels(root);
        int maxSum = INT_MIN;
        int ans =0;
        for(int i = 1;i<=level;i++){
            int sum = 0;
            bfs(root, i, sum); //root, level, sum
            if(sum>maxSum){
                maxSum = sum;
                ans = i;
            }
        }
        return ans;
    }
};