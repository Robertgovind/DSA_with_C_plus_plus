#include<iostream>
using namespace std;

int lastOccurence(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,3,3,4,5,5};
    cout<<"Last occurences : "<<lastOccurence(arr,7,4)<<endl;
}