// Problem: Reverse Nodes in K-Group
// Platform: LeetCode
// Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/
// Difficulty: Hard
// Approach:Recursive
// Time Complexity: O(n)
// Space Complexity: O(n)

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
    ListNode* reverseKGroup(ListNode* head, int k) {

    // Check if k nodes exist
    ListNode* temp = head;
    int count = 0;

    while(temp != NULL && count < k){
        temp = temp->next;
        count++;
    }

    // Less than k nodes left
    if(count < k){
        return head;
    }

    // Reverse first k nodes
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursive call for remaining nodes
    head->next = reverseKGroup(curr, k);

    return prev;
}
};
