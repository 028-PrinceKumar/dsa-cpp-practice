// Shop in candy store

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>candyStore(int candies[],int n, int k){
    sort(candies,candies+n);
    int mini=0;
    int buy=0;
    int free=n-1;

    while(buy<=free){
        mini=mini+candies[buy];
        buy++;
        free=free-k;
    }
    int maxi=0;
    buy=n-1;
    free=0;
    while(free<=buy){
        maxi=maxi+candies[buy];
        buy--;
        free=free+k;
    }
    vector<int>ans;
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;
}

int main() {
    int candies[]={1,2,3,4};
    int n=sizeof(candies)/sizeof(candies[0]);
    int k=2;
    vector<int>ans=candyStore(candies,n,k);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}
