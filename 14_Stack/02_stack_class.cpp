#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int *arr;
    int Top;
    int size;

    Stack(int size){
        this->size = size;
        arr= new int[size];
        Top = -1;
    }
    void push(int d){
        if(size-Top > 1){
            Top++;
            arr[Top] = d;
        }
        else{
        cout<<"Stack overflow!!"<<endl;
        }
    }
    void pop(){
        if(Top>=0){
            Top--;
        }
        else{
            cout<<"Stack underfow!!"<<endl;
        }
    }
    int tos(){
        if(Top>=0 && Top<size){
            return arr[Top];
        }
        else{
            cout<<"Stack is empty" <<endl;
            return -1;
        }
    }
    int peek(){
        if(Top>=0 && Top<size){
            return arr[Top];
        }
        else{
            cout<<"Stack is empty" <<endl;
            return -1;
        }
    }
    bool isempty(){
        if(Top ==-1)
        return true;
        else 
        return false;
    }
};
int main(){
    Stack s(5);
    s.push(34);
    s.push(39);
    s.push(12);
    s.pop();
    s.pop();
    int i = s.peek();

    cout<<i<<endl;
    return 0;
}