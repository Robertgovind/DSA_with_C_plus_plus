#include<iostream>
using namespace std;

void moveZeroes(int arr[],int n){
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[index],arr[i]);
            index++;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={3,0,0,1,2,0};
    printArray(arr,6);
    moveZeroes(arr,6);
    printArray(arr,6);
    return 0;
}