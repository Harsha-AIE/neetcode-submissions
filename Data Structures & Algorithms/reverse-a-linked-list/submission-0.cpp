class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* node = head;

        while (node != NULL) {
            ListNode* next = node->next; // store next
            node->next = prev;           // reverse
            prev = node;                 // move prev
            node = next;                 // move node
        }

        return prev;
    }
};