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
    public void bfs( TreeNode root, int n, List<Integer> temp){
        if(root==null) return;
        if(n==1){
            temp.add(root.val);
        }
        bfs(root.left, n-1, temp);
        bfs(root.right, n-1, temp);
    }
    public List<Integer> rightSideView(TreeNode root) {
        int level = levels(root);
        
        List<Integer> ans = new ArrayList<>();
        for(int i = 1; i<=level; i++){
            List<Integer> temp = new ArrayList<>();
            bfs(root, i, temp);
            int n = temp.size();
            ans.add(temp.get(n-1));
        }

        return ans;
    }
}