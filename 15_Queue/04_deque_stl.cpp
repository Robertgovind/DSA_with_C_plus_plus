//It is Doubly ended queue
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(3);
    d.push_back(8);
    cout<<d.front()<<endl;
    return 0;
}