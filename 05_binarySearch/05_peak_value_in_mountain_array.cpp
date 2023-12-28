#include<iostream>
using namespace std;

int peakElement(int arr[],int size) {
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[mid];
}

int main(){

    //This is mountain array
    int arr[7]={0,1,2,3,2,1,0};
    cout<<"Peak element in mountain array :"<<peakElement(arr,7)<<endl;
    return 0;
}