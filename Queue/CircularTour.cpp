// Platform: Geeksforgeeks
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

// Circular Tour
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class petrolPump{
    public:
    int petrol;
    int distance;
};

int tour(petrolPump p[],int n){
    int deficit=0;
    int balance=0;
    int start=0;
    for(int i=0;i<n;i++){
        balance+=p[i].petrol -p[i].distance;
        if(balance<0){
            deficit+=balance;
            start=i+1;
            balance=0;
        }
    }
    if(deficit+balance>=0){
        return start;
    }
    else{
        return -1;
    }
}

int main() {
    petrolPump p[]={{4,6},{6,5},{7,3},{4,5}};
    int n = sizeof(p) / sizeof(p[0]);
    cout<<"Starting Pump Index: "<<tour(p,n);
    return 0;
}
