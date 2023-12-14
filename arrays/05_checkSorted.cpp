#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    bool isSorted=false;
    
    for(int i=1;i<sizeof(arr)/arr[0];i++){
        if(arr[i-1]<=arr[i]){
            isSorted=true;
        }
    }
    cout<<isSorted;
}