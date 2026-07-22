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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base case
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        //meaning of this line is if(p==NULL || q==NULL) return false;
        //ki ya to p NUll honga pr q NULL nahi Honga aur vice versa
        //kyoki 2no NULL nahi ho skte ye apan ne upar vali line me check kr liya he already
        //is vali line me if(p==NULL && q==NULL) return true;

        if(p->val!=q->val) return false;

        bool lst = isSameTree(p->left,q->left); //lst = left sub tree 
        if(lst==false) return false;

        bool rst = isSameTree(p->right,q->right);
        if(rst==false) return false;

        return true;
    }
};