#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0 || nums.size() == 1){
        return nums.size();
    }
    priority_queue<int,vector<int>,greater<int>> min;
    for(int i=0;i<nums.size();i++){
        min.push(nums[i]);
    }
    int maxCount=1;
    int currCount=1;
    int prev = min.top();
    min.pop();
    for(int i=1;min.size();i++){
        int curr=min.top();
        min.pop();
        if(prev+1 == curr){
            currCount++;
            maxCount=(maxCount,currCount);
            prev=curr;
        }
        else{
            currCount=1;
            prev=curr;
        }
    }
    return maxCount;
}

int main(){
    vector<int> arr1={100,4,200,1,3,2};
    vector<int> arr2={0,3,7,2,5,8,4,6,0,1};
    cout<<longestConsecutive(arr1)<<endl;
    cout<<longestConsecutive(arr2)<<endl;
    return 0;
}