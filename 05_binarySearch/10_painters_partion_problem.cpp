#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int painingAreaSum=0;
    int paintersCount=1;
    for(int i=0;i<n;i++){
        if(painingAreaSum+arr[i]<=mid){
            painingAreaSum+=arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount>k || arr[i]>mid){
                return false;
            }
            painingAreaSum=arr[i];
        }
    }
    return true;
}
int painterPartion(int arr[],int n,int k){
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[4]  = {5,5,5,10};
    cout<<"Painting area for one painter is  : "<<painterPartion(arr,4,2)<<endl;
    return 0;
}