/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //m2 using fast and slow
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1 ;i<=n+1; i++){
            if(fast == NULL) return head->next; //edge case for [1] n =1 
            fast = fast->next;
        }
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;

        return head;

        //m1 normal
        // ListNode* temp = head;
        // int size =0;
        // while(temp!=NULL){
        //     size++;
        //     temp = temp->next;
        // }
        // cout<<size<<" ";
        // if(n==size){
        //     head = head->next;
        //     return head;
        // }
        // n = size-n; //nth index form staring 
        // temp = head;
        // for(int i=1;i<n;i++){
        //     temp = temp->next;
        // }
        // // temp->val= temp->next->val;
        // temp->next = temp->next->next;
        // return head;
    }
};