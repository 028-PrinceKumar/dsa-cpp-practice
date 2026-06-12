// Problem: Iplementation of two stack using single array
// Platform: CodeStudio
// Difficulty: Medium
// Time Complexity: O(max(1)
// Space Complexity: O(max(1)
// Implementation of two stack using single array
#include <iostream>
using namespace std;
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    // Initialize Two Stack
    TwoStack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    //Push in stack1
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow\n";
        }
    }
    // push in stack2
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow\n";
        }
    }
    // pop in stack1
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack is underflow\n";
            return -1;
        }
    }
    // pop in stack2
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            cout<<"Stack is underflow\n";
            return -1;
        }
    }
};

int main() {
    TwoStack s1(5);
    s1.push1(3);
    s1.push1(7);
    s1.push2(9);
    s1.push1(5);
    s1.push2(8);
    s1.pop1();
    s1.pop1();
    s1.pop2();
    s1.pop1();
    s1.pop2();
    s1.pop1();
    return 0;
}
