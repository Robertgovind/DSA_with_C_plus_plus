#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();

    solve(s,x);
    s.push(num);  //pushing elements while returning
}
void insertAtButtom(stack<int> &inputStack,int n){
    solve(inputStack,n);
}