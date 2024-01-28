#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int n=nums.size();
    if(n<2)
    return nums[0];

    vector<int> loot(n);
    loot[0]=nums[0];
    loot[1]=max(nums[0],nums[1]);
    for(int i=2;i<n;i++){
        loot[i]=max(loot[n-2]+nums[n],loot[n-1]);
    }
    return loot[n-1];
}