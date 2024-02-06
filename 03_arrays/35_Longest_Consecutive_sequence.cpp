#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//DO NOT WORK IN SOME TEST CASES   
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
        if(prev == curr){
            continue;
        }
        else if(prev+1 == curr){
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

//O(n log(n))
//THIS WORKS
int longestConsecutive1(vector<int> &nums){
    if(nums.size() == 0)
    return 0;
    sort(nums.begin(),nums.end());
    int currCount=1;
    int maxCount=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] == nums[i]){
            continue;;
        }
        else if(nums[i-1]+1 == nums[i]){
            currCount++;
        }
        else{
            currCount=1;
        }
        maxCount = max(maxCount,currCount);
    }
    return maxCount;
}
//OPTIMIZED IN O(n) TIME COMPLEXITY
int longestConsecutive2(vector<int>& nums){
    int maxCount =0;
    map<int, bool> data;
    for(int num:nums){
        data[num]=false;
    }
    for(int num : nums){
        int currCount = 1;
        int next = num+1;
        while((data.find(next) ) && (data[next] == false)){
            currCount++;
            data[num]=true;
            next++;
        }
        int prev = num-1;
        while(data.find(prev) && data[prev] == false){
            currCount++;
            data[prev] = true;
            prev--;
        }
        maxCount=max(maxCount,currCount);
    }
    return maxCount;
}

int main(){
    vector<int> arr1={100,4,200,1,3,2};
    vector<int> arr2={0,3,7,2,5,8,4,6,0,1};
    cout<<longestConsecutive1(arr1)<<endl;
    cout<<longestConsecutive1(arr2)<<endl;
    return 0;
}