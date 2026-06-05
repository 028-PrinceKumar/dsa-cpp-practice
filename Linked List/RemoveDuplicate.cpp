// Problem: Remove duplicate from sorted list
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
// Difficulty: Easy
// Approach:Iteration
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
        return NULL;
    }
    // non empty list
    ListNode* curr= head;
    while(curr !=NULL){
        if((curr->next !=NULL)&& curr->val== curr->next->val){
             ListNode* next_next=curr->next->next;
             ListNode* nodeToDelete= curr->next;
             delete(nodeToDelete);
             curr->next=next_next;
        }
        else //not equal
        {
            curr=curr->next;
        }
    }
    return head;

    }
};
