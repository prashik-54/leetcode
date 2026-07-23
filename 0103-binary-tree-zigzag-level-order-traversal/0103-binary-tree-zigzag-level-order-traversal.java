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
    public void leftOrder(TreeNode root, int n, List<Integer>temp){
        if(root==null) return; 
        if(n==1){ //need to store node.val in temp
            temp.add(root.val);
            return;
        }
        leftOrder(root.left,n-1,temp);
        leftOrder(root.right,n-1,temp);
    }
    public void rightOrder(TreeNode root, int n, List<Integer>temp){
        if(root==null) return; 
        if(n==1){ //need to store node.val in temp
            temp.add(root.val);
            return;
        }
        rightOrder(root.right,n-1,temp);
        rightOrder(root.left,n-1,temp);
    }
    public void traversal(TreeNode root, int l, List<List<Integer>>ans){
        for(int i=1; i<=l; i++){
            List<Integer>temp = new ArrayList<>();
            if(i%2!=0){ //odd level -> store form left to right
                leftOrder(root,i,temp);
            }
            else{ // even level -> store form right to left
                rightOrder(root,i,temp);
            }
            ans.add(temp);
        }
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        int l = levels(root);
        traversal(root,l,ans);
        return ans;
    }
}