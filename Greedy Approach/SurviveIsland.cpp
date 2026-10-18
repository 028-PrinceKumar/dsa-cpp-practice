// Survive on Island
#include <iostream>
using namespace std;

int minimumDays(int S,int N, int M){
    int sunday=S/7;

    int buyingDays=S-sunday;
    int totalFood=S*M;
    int ans=0;

    if(totalFood %N==0){
        ans=totalFood/N;
    }
    else{
        ans=totalFood/N+1;
    }
    if(ans<=buyingDays){
        return ans;
    }
    else{
        return -1;
    }
}
int main() {
    int s=10,n=16,m=2;
    int ans=minimumDays(s,n,m);
    cout<<ans<<endl;
    return 0;
}
