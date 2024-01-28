#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int splitArray(vector<int>& nums, int k) {
    int start=0,end=0;
    for(int i:nums){
        start=max(start,i);
        end+=i;
    }
    int mid = start+(end-start)/2;
    while(start<end){
        int pieces=1;
        int sum=0;
        for(int i:nums){
            if(sum+i>mid){
                sum=i;
                pieces++;
            }
            else{
                sum+=i;
            }
        }
         if(pieces>k){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
    }
    return end;
}

int main(){
    return 0;
}