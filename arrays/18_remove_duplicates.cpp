#include<iostream>
using namespace std;

int removeDuplicates(int arr[],int n){
    int ans=1,keep=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[keep]){
            continue;
        }
        else{
            swap(arr[++keep],arr[i]);
            ans++;
        }
    }
    return ans;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={0,0,1,1,1,2,2,3,3,4};
    printArray(arr,10);
    cout<<removeDuplicates(arr,10)<<endl;
    printArray(arr,10);
    return 0;
}