// Problem: Reverse Nodes in K-Group
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/add-two-numbers/
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))

class Solution {
public:
    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* temp = new ListNode(val);

        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(l1 || l2 || carry) {

            int val1 = (l1 ? l1->val : 0);
            int val2 = (l2 ? l2->val : 0);

            int sum = val1 + val2 + carry;

            insertAtTail(ansHead, ansTail, sum % 10);

            carry = sum / 10;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        return ansHead;
    }
};
