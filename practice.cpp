 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 
int setBits(int n){
    int count=0;
    while(n != 0){
        if(n&1)
        count++;

        n>>=1;
    }
    return count;
}
bool isSorted(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                return false;
            }
        }
    }
    return true;
}

bool canSortArray(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(setBits(nums[i])==setBits(nums[j])){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
    return isSorted(nums);
}

 int main(){
    vector<int> nums={8,4,2,30,15};
    cout<<canSortArray(nums)<<endl;
    return 0;
 }