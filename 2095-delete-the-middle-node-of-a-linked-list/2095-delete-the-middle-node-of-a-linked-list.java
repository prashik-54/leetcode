/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int listSize(ListNode temp){
        if(temp== null) return 0;
        return 1 + listSize(temp.next);
    }
    public ListNode deleteMiddle(ListNode head) {
        ListNode temp = head;
        int len = listSize(temp);
        if(len==1){ //only one element is present so return null
            return null;
        }
        if(len == 2){ //2 nodes is present so delete another
            head.next = null; 
            return head;
        }

        temp = head;
        int mid = len/2;
        for(int i =0 ;i<mid-1;i++){
            temp = temp.next;
        }
        //temp's next is mid element which we have to delete
        temp.next = temp.next.next;

        return head;
    }
}