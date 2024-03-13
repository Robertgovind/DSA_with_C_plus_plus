#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(1);
    q.push(9);
    cout<<"Queue size :"<< q.size()<< endl;
    cout<<"Queue front :" << q.front()<<endl;
    q.pop();
    cout<<"Updated queue size :"<< q.size()<< endl;
    
    return 0;
}