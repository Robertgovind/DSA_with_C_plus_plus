#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void solve(queue<int>& qu){
    if(qu.empty()){
        return ;
    }
    int ele = qu.front();
    qu.pop();

    solve(qu);
    qu.push(ele);
}

queue<int> reverseRecursive(queue<int> q){
    solve(q);

    return q;
}

queue<int> reverseQueue(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        int ele = q.front();
        q.pop();
        s.push(ele);
    }

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
    return q;
}