// Heapify method 
// Min heap
// Using 0 indexing 
//Time Complexity: O(log n)

#include <iostream>
#include<vector>
using namespace std;

void heapify(int arr[],int n, int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest !=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

vector<int>buildMinHeap(vector<int>&arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    return arr;
}
int main() {
    vector<int> arr={-1,54,53,55,52,50};
    vector<int>ans=buildMinHeap(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
