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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int l = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            l++;
        }
        temp->next = head;

        k = k%l;
        temp = head;
        int last = l-k;
        for (int i=1; i<last; i++) {
            temp = temp->next;
        }
        ListNode *tail = temp->next;
        temp->next = NULL;
        return tail;
    }
};