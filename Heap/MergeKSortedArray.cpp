// Problem: Merge k- Sorted Array
// Platform:Coding Ninjas
// Link:https:https://www.naukri.com/code360/problems/merge-k-sorted-lists_992772
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(n*klog(k))
// Space Complexity: O(n*k)

class node{
    public:
    int data;
    int i;
    int j;
    node(int data,int row, int col){
        this->data=data;
        i=row;
        j=col;
    }

};

class compare{
    public:
    bool operator()(node* a,node*b){
        return a->data>b->data;
    }
};

vector<int>mergeKSortedArray(vector<vector<int>>&kArrays,int k){
    priority_queue<node*,vector<node*>,compare>minHeap;
    //step1: insert the first element of all k array
    for(int i=0;i<k;i++){
        node* tmp=new node(kArrays[i][0],i,0);
        minHeap.push(tmp);
    }
    vector<int>ans;
    // step-2:
    while(minHeap.size()>0){
        node* tmp=minHeap.top();
        ans.push_back(tmp->data);
        minHeap.pop();
        int i=tmp->i;
        int j=tmp->j;
        if(j+1<kArrays[i].size()){
            node* next=new node(kArrays[i][j+1],i,j+1);
            minHeap.push(next);
        }
    }

    return ans;
    
}
