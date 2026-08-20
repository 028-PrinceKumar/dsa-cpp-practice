// Problem: Find the Kth Smallest elelment
// Platform: GeeksforGeeks
// Difficulty:Medium
// Approach:Iterative
// Time Complexity: O(nlog n)


int kthSmallest(int arr[],int r, int k){
    priority_queue<int>pq;
    // Step 1
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // Step 2
    for(int i=k; i<=r;i++){
        if((arr[i]<pq.top())){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // step 3
    int ans=pq.top();
    return ans;
}
