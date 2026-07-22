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
    public void helper(TreeNode root, String s , List<String>ans){
        //base condition
        if(root==null) return;
        String currVal = String.valueOf(root.val);
        if(root.left==null && root.right==null){
            ans.add(s+currVal);
            return;
        }

        helper(root.left, s+currVal+"->",ans);
        helper(root.right,s+currVal+"->",ans);
        return;
    }
    public List<String> binaryTreePaths(TreeNode root) {
        List<String>ans = new ArrayList<>();
        helper(root,"",ans);
        return ans;
    }
}