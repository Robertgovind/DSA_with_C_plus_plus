#include<iostream>
using namespace std;

class Queue {
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int s){
        this->size = s;
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
    }

    void enqueue(int d){
        if(rear == size){
            cout<<"Queue overflow "<<endl;
            return ;
        }
        else{
            arr[rear] = d;
        }
        rear = rear+1;
    }

    void dequeue(){
        int d;
        if(front == rear){
            cout<<"Queue underflow"<<endl;
            return ;
        }
        else{
            d = arr[front];
            front++;
            if(front == rear){  // to avoid memory wastage
                front =0;
                rear =0;
            }
        }
    }

    int front(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int size(){
        if(front == rear){
            return 0;
        }
        return rear-front+1;
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }

        return false;
    }


};