#include<iostream>
using namespace std;

void countingInc(int n){
    if(n==0) return ;

    countingInc(n-1);
    cout<<n<<endl;
}

void countingDec(int n){
    if(n==0) return ;

    cout<<n<<endl;
    countingDec(n-1);
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    countingInc(n);
    countingDec(n);
    return 0;
}