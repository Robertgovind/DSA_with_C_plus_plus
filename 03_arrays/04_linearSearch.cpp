#include<iostream>
using namespace std;

int main(){
    int arr[]={3,5,4,6,7,9};
    int index,key=9;
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==key){
            index=i;
            break; 
        }
    }
    cout<<"The found index is: "<<index<<endl;
    return 0;
}