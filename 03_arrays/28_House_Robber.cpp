#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Not Working
int rob(vector<int>& nums) {
    int ans=0, sum1=0, sum2=0;
    for(int i=0;i<nums.size();i++){
        if(i&1){
            sum1+=nums[i];
        }
        else{
            sum2+=nums[i];
        }
    }
    return max(sum1,sum2);
}

int main(){
    vector<int> nums={2,7,9,3,1};
    cout<<rob(nums) ;
    return 0;
}