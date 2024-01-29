#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 bool canJump(vector<int>& nums) {
        int dest=nums.size()-1;
        int count =1;
        for(int i=nums.size()-2;i>=0;i--){
            if(count<=nums[i]){
                dest=i;
                count=1;
            }
            else{
                count++;
            }
        }
        if(dest==0){
            return true;
        }   
        return false;
    }