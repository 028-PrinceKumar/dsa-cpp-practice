// Platform: Code Studio
// Difficulty: Easy
// Time Complexity: O(1)
// Space Complexity: O(1)

// Implementation of queue using array
#include <iostream>
#include<queue>
using namespace std;
class Queue{
    int * arr;
    int size;
    int front;
    int rear;
    public:
    Queue(int size){
        this->size=size;
        this->front=0;
        this->rear=0;
        arr= new int[size];
    }
    // push opration
    void enqueue(int data){
        if(rear==size){
            cout<<"Queue is full\n";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    // pop operation
    void dequeue(){
        if(rear==front){
            cout<<"Queue is empty\n";
        }
        else{
            cout<<"Poped element:"<<arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }

        }
    }
    // for return front
    int qfront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }

    }

    // check is empty
    int isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Queue Q1(5);
    Q1.enqueue(9);
    Q1.enqueue(89);
    Q1.dequeue();
    // cout<<Q1.qfront();
    // cout<<Q1.isempty();

    return 0;
}
