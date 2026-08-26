// Count maximum frequency of a number
#include <iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int maximumFrequency(vector<int>&arr,int n){
    unordered_map<int,int>count;
    int maxFreq=0;
    int maxAns=0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxFreq=max(maxFreq,count[arr[i]]);

    }
    for(int i=0;i<arr.size();i++){
        if(maxFreq==count[arr[i]]){
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}


int main() {
    vector<int>arr={1,2,3,3,4,5,1,8,7,9,3,3};
    cout<<maximumFrequency(arr,arr.size());
    return 0;
}
 
 
