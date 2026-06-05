// Problem: Linked list cycle
// Platform: LeetCode
// Link: https://leetcode.com/problems/linked-list-cycle-ii/description/
// Difficulty: Medium
// Approach:Floyd's algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode*  floydDetectLoop(ListNode* head){
    if(head==NULL){
        return NULL;
    }
    ListNode* slow=head;
    ListNode* fast=head;
    while(slow !=NULL && fast !=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
        return NULL;
    }
    ListNode* intersection=floydDetectLoop(head);
    if(intersection==NULL){
            return NULL;
        }
    ListNode* slow= head;
    while(slow != intersection){
        slow= slow->next;
        intersection=intersection->next;
        
    }
    return slow;
    }
};
