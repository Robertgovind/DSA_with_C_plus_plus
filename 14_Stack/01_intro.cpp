#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(3);
    s.push(5);
    cout<<"Top "<< s.top() << endl;
    s.pop();
    cout<<"Top "<<s.top()<< endl;
    cout<<s.empty()<<endl;
    return 0;
}