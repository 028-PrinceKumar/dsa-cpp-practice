// Problem: Merge two BST
// Platform: Code Studio
// Difficulty: Hard
// Approach:Recursively
// Time Complexity: O(h1+h2)
// Space Complexity: O(h1 + h2)

// Convert BST into doubly linked list

void convertIntoSortedDLL(Node* root, Node* &head){
    // base case
    if(root==NULL){
        return;
    }

    convertIntoSortedDLL(root->right,head);
    root->right=head;

    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertIntoSortedDLL(root->left,head);

}

// Merged two sorted Linked List

Node* mergeLinkedList(Node* head1, Node* head2){
    Node* head=NULL;
    Node* tail=NULL;
    while(head1 !=NULL && head2 !=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;

            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }

        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;

            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;

            }

        }
    }
    while(head1 !=NULL){
        tail->right=head1;
        head1->left=tail;
        tail=head1;
        head1=head1->right;

    }

    while(head2 !=NULL){
        tail->right=head2;
        head2->left=tail;
        tail=head2;
        head2=head2->right;

    }
    return head;
}

// Function for count the number of node in a linked list
int countNode(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp !=NULL){
        cnt++;
        temp=temp->right;
    }
    return cnt;
}

// Sorted Linked List to BST

Node* sortedLLToBST(Node* & head,int n){
    // base case 
    if(n<=0 || head==NULL){
        return NULL;
    }
    Node* left=sortedLLToBST(head,n/2);
    Node* root=head;
    root->left=left;

    head=head->right;
    root->right=sortedLLToBST(head,n-n/2-1);
    return root;
}



Node* mergeBST(Node* root1, Node* root2){

    // Step1: Convert BST into sorted DLL in-place
    Node* head1=NULL;
    convertIntoSortedDLL(root1,head1);
    head1->left=NULL;

    Node* head2=NULL;
    convertIntoSortedDLL(root2,head2);
    head2->left=NULL;

    // Step2: merge sorted Linked List
    Node* head=mergeLinkedList(head1,head2);

    // step3: Convert SLL into BST
    return sortedLLToBST(head,countNode(head));
}
