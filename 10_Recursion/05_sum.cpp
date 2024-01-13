#include<iostream>
using namespace std;

int sum(int *arr,int n){
    if(n==1) return arr[0];

    return arr[0] + sum(arr+1,n-1);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<sum(arr,6)<<endl;
}