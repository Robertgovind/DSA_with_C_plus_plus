//finding pivot element in a rotated array
#include<iostream>
using namespace std;

int pivotElement(int arr[],int size){
    int start=0,end=size- 1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){ //for first part of array
            start=mid+1;
        }
        else{  //for second part of array
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[mid];

}

int main(){
    int arr[7]={4,8,9,0,1,2,3};
    cout<<"Pivot element is : "<<pivotElement(arr,7);
    return 0;
}