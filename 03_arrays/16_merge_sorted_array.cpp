#include<iostream>
using namespace std;

void mergeSortedArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int idx1=0,idx2=0,index=0;
    while(idx1<n&&idx2<m){
        if(arr1[idx1]<arr2[idx2]){
            arr3[index]=arr1[idx1];
            index++;
            idx1++;
        }
        else{
            arr3[index]=arr2[idx2];
            index++;
            idx2++;
        }
    }
    while(idx1<n){
        arr3[index]=arr1[idx1]  ;
        index++;
        idx1++;
    }
    while (idx2<m)
    {
        arr3[index]=arr2[idx2];
        index++;
        idx2++;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    mergeSortedArray(arr1,5,arr2,3,arr3);
    printArray(arr3,8);
}