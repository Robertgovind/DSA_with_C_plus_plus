#include<iostream>
using namespace std;

int main(){
    int arr[]={3,2,5,6,2};
    int MAX=arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>MAX){
            MAX=arr[i];
        }
    }
    cout<<"max = "<<MAX;
    return 0;
}