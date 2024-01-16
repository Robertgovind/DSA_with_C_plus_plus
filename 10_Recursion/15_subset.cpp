#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums,vector<vector<int>> &ans,vector<int> output,int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,ans,output,index+1);
    int element=nums[index];
    output.push_back(element);
    solve(nums,ans,output,index+1);
}
vector<vector<int>> subset(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,ans,output,index);
    return ans;
}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=subset(nums);
    for(auto i:ans){
        for(int j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}