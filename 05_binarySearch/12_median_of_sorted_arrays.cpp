#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>& nums1,vector<int>& nums2){
    vector<int> temp;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j])
        temp.push_back(nums1[i++]);
        else
        temp.push_back(nums2[j++]);
    }
    while(i<nums1.size()){
        temp.push_back(nums1[i++]);
    }
    while (j<nums2.size())
    {
        temp.push_back(nums2[j++]);
    }
    return temp;
}

 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp=mergeArrays(nums1,nums2);
        int n=temp.size();
        double ans = 0.00;
        if(n&1){  //odd
           ans=temp[n/2];
           return (double)ans;
        }else{
            ans=(double)(temp[n/2]+temp[(n/2)-1])/2;
            return double(ans);
        }
        return ans;
    }

int main(){
    vector<int> nums1={1,2};
    vector<int> nums2={3,4};
    vector<int> ans=mergeArrays(nums1,nums2);
    for(int i:ans)
    cout<<i<<" ";
    cout<<endl;
    cout<<findMedianSortedArrays(nums1,nums2);
    cout<<double(5/2);
    return 0;
}