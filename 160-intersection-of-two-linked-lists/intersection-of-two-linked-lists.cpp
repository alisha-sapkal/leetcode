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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int lenA = 0, lenB = 0;
        while (a != NULL) {
            lenA++;
            a = a->next;
        }
        a = headA;
        while (b != NULL) {
            lenB++;
            b = b->next;
        }
        b = headB;
        int d = abs(lenA - lenB);
        if (lenA > lenB) {
            for (int i=0; i<d; i++) headA = headA->next;
        }
        else {
            for (int i=0; i<d; i++) headB = headB->next;
        }
        a = headA;
        b = headB;
        while (a != NULL || b != NULL) {
            if (a == b) return a;
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};