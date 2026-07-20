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
    ListNode *detectCycle(ListNode *head) {
        //m2
        ListNode* fast = head;
        ListNode* slow = head;
        bool cycle =false;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                cycle = true;
                break;
            }
        }
        if(cycle==false) return NULL;

        ListNode* temp = head;
        while(temp!=NULL){
            if(temp==slow) return temp;
            temp = temp->next;
            slow = slow->next;
        }

        return NULL;
        

        // //m1 - using set
        // ListNode* temp = head;
        // unordered_set<ListNode*>s;
        // while(temp!=NULL){
        //     if(s.find(temp)!=s.end()){
        //         return temp;
        //     }
        //     s.insert(temp);
        //     temp = temp->next;
        // }
        // return NULL;
    }
};