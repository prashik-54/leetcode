/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //m2 - Floyd's Cycle-Finding Algorithm
        //using fast and slow pointer
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next != NULL){
           
           slow = slow->next;
           fast = fast->next->next; 
           if(slow==fast) return true;
        }
        return false;



        // //m1- using set  TC-(n) , sc - (n)
        // ListNode* temp = head;
        // unordered_set<ListNode*>st;
        // while(temp!=NULL){
        //     if(st.find(temp) != st.end()){
        //         return true;
        //     }
        //     st.insert(temp);
        //     temp = temp->next;
        // }
        // return false;
    }
};