#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int n){
    if(s.empty() || s.top()<n){
        s.push(n);
        return;
    }
    int num = s.top();
    s.pop();

    insertSorted(s,n);
    s.push(num);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();

    sortStack(s);
    insertSorted(s,num);
}