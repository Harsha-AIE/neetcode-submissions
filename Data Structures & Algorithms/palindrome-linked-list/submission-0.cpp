class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;

        ListNode* slow = head;
        ListNode* fast = head;

        // Push first half
        while (fast != NULL && fast->next != NULL) {
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        // Skip middle element for odd length
        if (fast != NULL)
            slow = slow->next;

        // Compare second half
        while (slow != NULL) {
            if (st.top() != slow->val)
                return false;
            st.pop();
            slow = slow->next;
        }

        return true;
    }
};