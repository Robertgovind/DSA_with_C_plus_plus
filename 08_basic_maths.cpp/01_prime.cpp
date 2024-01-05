#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    if(isPrime(n))
    cout<<"Prime!!!";
    else
    cout<<"Not Prime!!!";
    return 0;
}