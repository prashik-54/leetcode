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
    ListNode* middleNode(ListNode* head) {
        // //m1
        // int size = 1;
        // ListNode* temp = head;
        // while(temp->next != NULL){
        //     size++;
        //     temp = temp->next;
        // }
        // if(size==1) return head;
        // int middle = size/2;
        // temp = head;
        // for(int i=1;i<middle;i++){
        //     temp = temp->next;
        // }
        // return temp->next;

        //m2
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int middle = len/2;
        temp = head;
        for(int i=1; i<=middle; i++){
            temp = temp->next;
        }
        return temp;
    }
};