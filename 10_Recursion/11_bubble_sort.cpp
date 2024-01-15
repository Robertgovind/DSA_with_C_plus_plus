#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    if(n==0 || n==1)
    return ;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n-1);
}

int main(){
    int arr[]={3,6,4,2,7,6,8};
    bubbleSort(arr,7);
    for(int i:arr)
    cout<<i<<" ";
    return 0;
}