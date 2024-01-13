#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n == 1) return true;

    if(arr[0]>arr[1])
    return false;
    else
    return isSorted(arr+1,n-1);
}
int main(){
    int arr[6]={1,3,3,4,5,6};
    cout<<isSorted(arr,6)<<endl;
    return 0;
}