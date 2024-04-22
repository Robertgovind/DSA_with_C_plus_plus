#include<iostream>
using namespace std;

class Deque {
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Deque(int n){
        size = n;
        arr = new int[size];
        front =-1;
        rear =-1;
    }

    bool push_front(int x){
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1 ){
            front =size-1   ;
        }
        else{
            front --;
        }
        arr[front] = x;
        return true;
    }

    bool push_rear(int x){
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front = rear =0;
        }
        else if(rear = size-1 && front != 0){
            rear =0;
        }
        else {
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    int pop_front(){
        if(isEmpty()){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front =0;
        }
        else {
            front ++;
        }
        return ans;
    }

    int pop_rear(){
        if(isEmpty()){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(rear == size-1){
            front =0;
        }
        else {
            rear--;
        }
        return ans;
    }

    int get_front(){
        if(isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int get_rear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) {
            return true;
        }
        return false;
    }
};