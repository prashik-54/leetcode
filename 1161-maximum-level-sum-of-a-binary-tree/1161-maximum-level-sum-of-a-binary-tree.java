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
    private int sum = 0;
    public int levels(TreeNode root){
        if(root==null) return 0;
        return 1+ Math.max( levels(root.left), levels(root.right));
    }
    public void bfs(TreeNode root, int n){
        if(root== null) return;
        if(n==1){
            this.sum+=(root.val);
        }
        bfs(root.left, n-1);
        bfs(root.right, n-1);
    }
    public int maxLevelSum(TreeNode root) {
        int level = levels(root);

        int maxSum = Integer.MIN_VALUE;
        int ans = 1; //level of max sum

        for(int i = 1; i<=level; i++){
            sum = 0;
            bfs(root, i);
            if(sum>maxSum){
                maxSum = sum;
                ans = i;
            }
        }
        return ans;
    }
}