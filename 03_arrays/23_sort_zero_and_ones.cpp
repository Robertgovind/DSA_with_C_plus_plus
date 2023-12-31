#include<iostream>
using namespace std;

void sortZeroAndOnes(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        if(arr[s]>arr[e]){
        swap(arr[s++],arr[e--]);
        }
        else{
            s++;
            e--;
        }
    }
}
int main(){
    int arr[6]={0,1,1,0,0,1};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sortZeroAndOnes(arr,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}