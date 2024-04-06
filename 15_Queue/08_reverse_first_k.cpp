#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int K){
    stack<int> s;
    while(K--){
        int ele = q.front();
        q.pop();
        s.push(ele);
    }

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    int count = q.size()-K;
    while(count--){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }

    return q;
}
