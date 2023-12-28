#include<iostream>
using namespace std;

int main(){
    int arr[]={3,2,4,5,6,4,1};
    int sum=0;
    for(int i=0;i<sizeof(arr)/arr[0];i++){
        if(i%2==0){
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
    }
    cout<<"The difference of elements at even and odd positions is :"<<sum<<endl;
}