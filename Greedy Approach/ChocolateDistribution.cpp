// Chocolate distribution problem
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// n:size of array
// m:no of students

int findMinDiff(vector<int>a,int n, int m){
    sort(a.begin(),a.end());
    int i=0;
    int j=m-1;
    int mini=INT_MAX;
    while(j<a.size()){
        int diff=a[j]-a[i];
        mini=min(mini,diff);
        i++;
        j++;
    }
    return mini;
}
int main() {
    vector<int>arr={3,4,1,9,56,7,9,12};
    int n=8;
    int m=5;
    int ans=findMinDiff(arr,n,m);
    cout<<ans<<endl;

    return 0;
}
