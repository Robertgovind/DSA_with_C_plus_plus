#include<iostream>
using namespace std;
int count=0;
void print(int p){
    if(p==0)
    return ;
    p--;
    print(p);
    count++;
    cout<<count;
}

int main(){
    print(5);
    return 0;
}