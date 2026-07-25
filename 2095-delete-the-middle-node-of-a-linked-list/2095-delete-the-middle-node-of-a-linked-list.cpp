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
    int listSize(ListNode* temp){
        if(temp==NULL) return 0;
        return 1 + listSize(temp->next);
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int len = listSize(head);
        if(len==1){
            return NULL;
        }
        if(len == 2){
            temp->next = NULL;
            return head; 
        }
        len = len/2;
         temp =head;
        for(int i =0;i<len-1; i++){
            temp = temp->next;
        }
        
        
        temp->next = temp->next->next;
        return head;
    }
};