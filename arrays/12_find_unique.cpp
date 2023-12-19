#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int m,n;
    cin>>m;
    n=2*m+1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findUnique(arr,n);
    return 0;
}