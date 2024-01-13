#include<iostream>
using namespace std;

bool findKey(int *arr, int n, int key){
    if(n==0) return false;

    if(arr[0]==key) return true;

    return findKey(arr+1,n-1,key);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<findKey(arr,6,0)<<endl;
    return 0;
}