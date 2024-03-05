#include<iostream>
#include<stack>
using namespace std;


void insertAtButtom(stack<int> &s, int n){
    if(s.empty()){
        s.push(n);
        return ;
    }
    int num = s.top();
    s.pop();
    insertAtButtom(s,n);
    s.push(num);
}
void reverseStack(stack<int> &stack){
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtButtom(stack,num);
}