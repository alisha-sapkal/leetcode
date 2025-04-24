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
        int len = 0;
        while (temp != NULL) {
            temp = temp->next;
            len++;
        }
        if (len == n) return head->next;
        else {
            int curr = len - n;
            temp = head;
            while (curr--) {
                if (curr == 0) {
                    ListNode* del = temp->next;
                    temp->next = temp->next->next;
                    delete del;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};