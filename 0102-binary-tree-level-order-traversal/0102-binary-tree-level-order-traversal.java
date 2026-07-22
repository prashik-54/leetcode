/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int levels(TreeNode root){
        if(root==null) return 0;
        return 1 + Math.max(levels(root.left),levels(root.right));
    }
    public List<Integer> helper(TreeNode root, int n, List<Integer>temp){
        if(root==null) return temp;
        if(n==1){
            temp.add(root.val);
            return temp;
        }
        helper(root.left,n-1,temp);
        helper(root.right,n-1,temp);
        return temp;
    }
    public void traversal(TreeNode root, int l, List<List<Integer>>ans){
        for(int i=1;i<=l;i++){
            List<Integer>v = new ArrayList<>();
            helper(root,i,v);
            ans.add(v);
        }
    }
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        Integer l = levels(root);
        traversal(root,l,ans);
        return ans;
    }
}