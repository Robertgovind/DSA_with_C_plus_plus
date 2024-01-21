#include<iostream>
using namespace std;

int sum(int a, int b){
    int n1=a,n2=b;
    int carry=0;
    while(n2!=0){
        int sum=n1^n2;
        carry =(n1&n2)<<1;
        n1=sum;
        n2=carry;
    }
    return n1;
}

int main(){
    cout<<sum(7,115);
    return 0;
}