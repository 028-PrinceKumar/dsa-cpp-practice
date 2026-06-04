// Problem: Middle of the  Linked List
// Platform: LeetCode
// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Difficulty: Easy
// Approach:Traversing
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return head;
    }
    else if(head->next->next==NULL){
        return head->next;
    }
    else{
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast !=NULL){
                fast= fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
    return 0;
    }
};
