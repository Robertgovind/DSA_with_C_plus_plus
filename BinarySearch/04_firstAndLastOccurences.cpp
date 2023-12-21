#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& arr,int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurence(vector<int>& arr,int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

pair<int ,int> firstAndLastOccurences(vector<int>& arr,int n,int key){
    pair<int ,int > p;
    p.first=firstOccurence(arr,n,key);
    p.second=lastOccurence(arr,n,key);

    return p;
}

int main()  {
    vector<int> v = {1,2,2,3,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(4);
    pair<int ,int> p=firstAndLastOccurences(v,7,5);
    cout<<p.first<<endl;
    cout<<p.second<<endl;
}