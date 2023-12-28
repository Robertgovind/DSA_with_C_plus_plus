#include<iostream>
using namespace std;

int getPivot(int arr[],int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return mid;
}

int binarySearch(int arr[],int s,int e,int key){
    int start=s,end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int searchIndex(int arr[],int size,int key){
    int pivot=getPivot(arr,size);
    if(arr[pivot]<=key&&arr[size-1]>=key){
        cout<<"second line"<<endl;
        return binarySearch(arr,pivot,size-1,key);
        
    }
    else{
        cout<<"first line " <<endl;
        return binarySearch(arr,0,pivot-1,key);
    }
}
int main(){
    int arr[8]={8,9,10,12,3,5,6,7};
    cout<<"The index of key is :"<<searchIndex(arr,8,10);
    return 0;
}