// Problem: Implementation of Dqueu
// Platform: Code Studio
// Difficulty: Medium
// Time Complexity: O(1)
// Space Complexity: O(1)

// Implementation of Deque using array
#include <iostream>
using namespace std;

class Deque{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Deque(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    bool pushFront(int x){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear !=size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;

    }
    // Push at rear
    bool pushRear(int x){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
            return  false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front !=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }
    //pop front

    int popFront(){
        if(front==-1){
            cout<<"Queue is empty\n";
            return -1;
        }
        int ans=arr[front];
        arr[front]==-1;
        if(front==rear){
            if(front==rear){//Single element is present
                front=rear=-1;
            }
        }
        else if(front==size-1){
            front=0;//to maintain the cyclic nature
        }
        else{//normal flow
            front++;
        }
        return ans;
    }
    // pop rear
    int popRear(){
        if(front==-1){
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if((front==0 && rear==size-1)||(front !=0 && rear==(front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }

};

int main() {
    Deque Q1(3);
    cout<<Q1.pushFront(9)<<endl;
    cout<<Q1.pushRear(8)<<endl;
    cout<<Q1.pushFront(6)<<endl;
    cout<<Q1.isFull()<<endl;
    cout<<Q1.popFront()<<endl;
    cout<<Q1.popRear()<<endl;
    cout<<Q1.isEmpty()<<endl;
    cout<<Q1.isFull()<<endl;
    return 0;
}
