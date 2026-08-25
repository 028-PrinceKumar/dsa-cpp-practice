// Problem: Merged two sorted linked List
// Platform:Coding Ninjas
// Link:https: https://www.naukri.com/code360/problems/merge-k-sorted-lists_992772
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(n*klog k)
// Space Complexity: O(k)

class Node{
    public:
    int data;
    int head;
    int tail;
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};
class compare{
    public:
    bool operator()(Node* a,Node* b){
        return a->data> b->data;
    }
};

Node* mergeKLists(vector<Node*>&arr){
    priority_queue<Node*,vector<Node*>,comapre>minHeap;
    int k=arr.size();
    if(k==0){
        return NULL;
    }
    // step 1
    for(int i=0; i<k;i++){
        if(arr[i] !=NULL){
            minHeap.push(arr[i]);
        }
    }
    Node* head=NULL;
    Node* tail=NULL;
    Node* next=head;
  

    while(minHeap.size()>0){
        Node* top=minHeap.top();
        minHeap.pop();
        if(top->next !=NULL){
            minHeap.push(top->next);
        }
        if(head==NULL){
            // answer LL is empty
            head=top;
            tail=top;
        }
        else{
            //insert at Linked List
            tail->next=top;
            tail=top;
        }
    }
    return head;
}
