// Problem: Kth Largest Sum of Subarray
// Platform:Coding Ninjas
// Link:https://www.naukri.com/code360/problems/merge-k-sorted-lists_992772
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(n^2)
// Space Complexity: O(k)


int getKthLargest(vector<int>&arr,int k){
    priority_queue<int,vector<int>,greater<int>>mini;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(mini.size()<k){
                mini.push(sum);
            }
            else{
                if(sum>mini.top()){
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
    
}
