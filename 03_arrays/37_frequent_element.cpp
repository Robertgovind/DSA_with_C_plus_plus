#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> count;
    vector<int> temp;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]=0;
    }
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    sort(count.begin(),count.end());
    
    for(auto num : count){
        cout<<num.first<<" "<<num.second<<endl;
    }
    return temp;
}