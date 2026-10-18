// Minimum cost of ropes
#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int minCost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    int cost=0;
    while(pq.size()>1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        int mergedLength=first+second;
        cost=cost+mergedLength;
        pq.push(mergedLength);
    }
    return cost;

}
int main() {
    int arr[]={4,3,2,6};
    int n=4;
    int ans=minCost(arr,n);
    cout<<ans<<endl;
    return 0;
}
