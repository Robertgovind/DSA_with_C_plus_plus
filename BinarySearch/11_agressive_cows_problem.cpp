#include<iostream>
#include<math.h>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid,int lastPos){
    int cowCount=1;
    bool ans;
    for(int i=lastPos;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])>=mid){
            return true;
        }
    }
    return false;
}

int agressiveCows(int arr[],int n,int cows){
    int start=0;
    int end=arr[0];
    for(int i=1;i<n;i++){
        end=max(end,arr[i]);
    }
    int ans=-1;
    int mid=start+(end-start)/2;
    int lastPos=0;
    while(start<end){
        if(isPossible(arr,n,cows,mid,lastPos)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        lastPos++;
    }
    return ans;
}
int main(){
    int arr[5]={4,2,1,3,6};
    cout<<agressiveCows(arr,5,2)<<endl;
    return 0;
}