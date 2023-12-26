#include<iostream>
using namespace std;

//Reverse an array after position m

void reverseArray(int arr[],int n,int m){
    int start=m+1,end=n-1;
    while(start<=end){
        swap(arr[start++],arr[end--]);
        // start++;
        // end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={3,2,5,3,2,1};
    reverseArray(arr,6,2);
    printArray(arr, 6);
    return 0;
}