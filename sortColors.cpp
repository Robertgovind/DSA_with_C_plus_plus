#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int s=0,e=nums.size()-1;
    while(s<=e){
        if(nums[s]==0)
        s++;
        else if(nums[e]==0)
        swap(nums[s++],nums[e--]);
        else
        e--;
    }
    e=nums.size()-1;
    while(s<=e){
        if(nums[s]==1)
        s++;
        else if(nums[e]==1)
        swap(nums[s++],nums[e--]);
        else
        e--;
    }
}
int main(){
    vector<int> arr={0,1,0};
    sortColors(arr);
    for(int i:arr)
    cout<<i<<" ";
    return 0;
}