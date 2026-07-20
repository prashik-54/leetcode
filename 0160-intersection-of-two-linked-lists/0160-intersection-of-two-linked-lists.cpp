class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA = 0, lenB = 0;

        // 1. Calculate lengths
        while(tempA != NULL) { lenA++; tempA = tempA->next; }
        while(tempB != NULL) { lenB++; tempB = tempB->next; }

        // 2. RESET pointers back to heads
        tempA = headA;
        tempB = headB;

        // 3. Align the starting points
        int diff = abs(lenA - lenB);
        for(int i = 0; i < diff; i++) {
            if(lenA > lenB) {
                tempA = tempA->next;
            } else {
                tempB = tempB->next;
            }
        }

        // 4. Traverse together to find intersection
        while(tempA != NULL && tempB != NULL) {
            if(tempA == tempB) {
                return tempA; // Return the intersection node
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL; // No intersection found
    }
};
