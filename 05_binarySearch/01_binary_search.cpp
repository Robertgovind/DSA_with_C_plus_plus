#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[6]={3,4,5,6,7,8};
    cout<<binarySearch(arr,6,7) ;
    return 0;
}