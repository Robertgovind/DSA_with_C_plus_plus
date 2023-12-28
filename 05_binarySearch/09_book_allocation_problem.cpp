#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[],int n,int m){
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n, m, mid)){  //possible to allocate
            ans=mid;
            end=mid-1;
        }
        else{        //not possible to allocate
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int arr[4]={10,20,30,40};
    cout<<allocateBooks(arr,4,2);
 return 0;   
}