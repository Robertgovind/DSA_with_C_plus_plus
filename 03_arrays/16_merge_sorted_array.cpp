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


//This code works for leetcode but gets runtime error
void insertElement(int arr1[],int pos,int n,int ele){
    for(int i=n-1;i>pos;i--){
        arr1[i]=arr1[i-1];
    }
    arr1[pos]=ele;
}
void mergeSortedArray1(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if((arr1[i]==0)|| arr1[i]>=arr2[j]){
            insertElement(arr1,i,n,arr2[j++]);
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
    int arr1[8]={1,3,5,7,9,0,0,0};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    mergeSortedArray1(arr1,8,arr2,3);
    printArray(arr1,8);
}