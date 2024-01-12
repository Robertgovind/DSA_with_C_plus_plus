#include<iostream>
using namespace std;
double factorial (int n){
    if(n==0)   
    return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<factorial(n);
    return 0;
}