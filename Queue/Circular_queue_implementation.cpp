// Platform: Code Studio
// Difficulty: Easy
// Time Complexity: O(1)
// Space Complexity: O(1)

// Implementation of Circular Queue

#include <iostream>
using namespace std;

class CircularQueue{
    int * arr;
    int size;
    int front;
    int rear;
    public:
    CircularQueue(int size){
        this->size=size;
        this->front=-1;
        this->rear=-1;
        this->arr=new int[size];
    }
    // Enqueues Operation
    bool enqueue(int value){
        if((front==0 && rear==size-1)||rear==(front-1)%(size-1)){
            cout<<"Queue is full\n";
            return false;
        }
        else if(front==-1){//first element push
        front=rear=0;
        }

        else if(rear==size-1 && front !=0){
            rear=0;
        }

        else{
            rear++;  
        }

        arr[rear]=value;
        return true;

    }

    // Dequeue operation
    int dequeue(){
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

};
int main() {
    CircularQueue Q1(3);
    cout<<Q1.enqueue(9)<<endl;
    cout<<Q1.enqueue(8)<<endl;
    cout<<Q1.dequeue()<<endl;
    cout<<Q1.enqueue(23)<<endl;
    cout<<Q1.enqueue(0)<<endl;
    cout<<Q1.enqueue(8999)<<endl;


    return 0;
}
