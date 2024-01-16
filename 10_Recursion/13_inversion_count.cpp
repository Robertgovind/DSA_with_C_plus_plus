#include<iostream>
using namespace std;
int merge(int *arr,int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0;i<len1;i++)
    first[i]=arr[k++];

    k=mid+1;
    for(int i=0;i<len2;i++)
    second[i]=arr[k++];

    int idx1=0;
    int idx2=0;
    k=s;
    int count=0;
    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2])
        arr[k++]=first[idx1++];
        else
        arr[k++]=second[idx2++];
        count=count+(mid-idx1);
    }
    while(idx1<len1)
    arr[k++]=first[idx1++];

    while(idx2<len2)
    arr[k++]=second[idx2++];

    delete []first;
    delete []second;
    return count;
}

int mergeSort(int *arr,int s, int e){
    if(s>=e)
    return 0;

    int count=0;
    int mid=s+(e-s)/2;
    count+=mergeSort(arr,s,mid);
    count+=mergeSort(arr,mid+1,e);
    count+=merge(arr,s,e);

    return count;
}
int main(){
    int arr[]={5,3,2,6,7,4,5,8,9,0};
    int arr2[]={8,4,2,1};
   cout<< mergeSort(arr2,0,5-1)<<endl;
    for(int i:arr2)
    cout<<i<<" ";

    cout<<endl;
    return 0;
}