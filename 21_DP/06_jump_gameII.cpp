#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//THIS DOES NOT WORK
int jump1(vector<int>& nums) {
    if(nums.size() == 1)
    return 0;
    int sum = 0;
    int count = 1;
    for(int i=0;i<nums.size();i++){
        int s = nums[i];
        sum+=nums[i];
        int e = INT_MIN; 
        for(int j=i+1;j<=s && j<nums.size();j++){
            if(e<nums[j]){
                e=nums[j];
                i=j;
                count++;
            }
        }
        if(sum+e >= nums.size())
        return count;
    }  
    return 0;
}
int jump(vector<int>& nums){
    int jumps = 0;
    int dest = nums.size()-1;
    int distance = 0,prev = 0;
    if(nums.size() == 1)
    return 0;

    for(int i=0;i<nums.size();i++){
        distance = max(distance,i+nums[i]);
        if(i == prev){
            prev = distance;
            jumps++;
            if(distance >= dest)
            return jumps;
        }
    }
    return jumps;
}
int main(){
    vector<int> jumps = {2,3,1,1,4};
    cout<<jump1(jumps)<<endl;
    vector<int> jmp = {2,3,0,1,4};
    cout<<jump1(jmp)<<endl;
    return 0;
}