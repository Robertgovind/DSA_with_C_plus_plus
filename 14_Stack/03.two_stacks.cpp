#include<bits/stdc++.h>
using namespace std;
class TwoStack {
    public:
    int *arr;
    int Top1;
    int Top2;
    int size;

    TwoStack(int size){
        this->size = size;
        arr=new int[size];
        Top1 = -1;
        Top2 = size;
    }
    void push1(int d){
        if(Top2 - Top1 >1){
            Top1++;
            arr[Top1] = d;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void push2(int d){
        if(Top2 - Top1 >1){
            Top2--;
            arr[Top2] = d;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop1(){
        if(Top1>=0){
            Top1--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    void pop2(){
        if(Top2<size){
            Top2++;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
};