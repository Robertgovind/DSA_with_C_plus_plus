#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack, int c, int size){
    if(c== size/2){
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack,c+1,size);
    inputStack.push(num); // pushing the remaining value while returning
}
void deleteMid(stack<int> inputStack, int N){
    int c = 0;
    solve(inputStack,c,N);
}