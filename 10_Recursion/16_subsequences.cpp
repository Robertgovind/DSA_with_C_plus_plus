#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<string> nums,vector<vector<string>> &ans,vector<string> output,int index){
    if(index>=nums.size()){
        if(output.size()>0)
        ans.push_back(output);
        return;
    }
    solve(nums,ans,output,index+1);
    string element=nums[index];
    output.push_back(element);
    solve(nums,ans,output,index+1);
}
vector<vector<string>> subset(vector<string> &nums){
    vector<vector<string>> ans;
    vector<string> output;
    int index=0;
    solve(nums,ans,output,index);
    return ans;
}
int main(){
    vector<string> nums={"a","b","c"};
    vector<vector<string>> ans=subset(nums);
    for(auto i:ans){
        for(string j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}