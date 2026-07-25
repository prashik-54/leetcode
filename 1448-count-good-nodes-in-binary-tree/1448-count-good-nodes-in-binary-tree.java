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
class Solution{
    private int count = 0;
    public void dfs(TreeNode root , int maxele){
        if(root == null) return; 
        if(root.val >= maxele){
            count++;
            maxele = root.val;
        }
        dfs(root.left, maxele);
        dfs(root.right, maxele);
    }
    public int goodNodes(TreeNode root) {
        
        int maxele = Integer.MIN_VALUE;
        dfs(root , maxele);
        return count;
    }
}