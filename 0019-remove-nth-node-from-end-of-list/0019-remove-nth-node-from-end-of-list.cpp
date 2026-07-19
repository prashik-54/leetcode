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
        ListNode* temp = head;
        int size =0;
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }
        cout<<size<<" ";
        if(n==size){
            head = head->next;
            return head;
        }
        n = size-n; //nth index form staring 
        temp = head;
        for(int i=1;i<n;i++){
            temp = temp->next;
        }
        // temp->val= temp->next->val;
        temp->next = temp->next->next;
        return head;
    }
};