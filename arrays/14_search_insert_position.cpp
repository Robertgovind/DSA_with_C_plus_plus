#include<iostream>
using namespace std;
#include<vector>

 int searchInsert(int nums[],int n, int target) {
        int start=0,end=n-1;
        int ans;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){             
                ans=mid+1;
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
             mid=start+(end-start)/2;
        }
        if(ans==-1){
            return 0;
        }
        return ans;
      
    }

int main(){
    int arr[]={1,3,5,7,8};
    cout<<searchInsert(arr,5,6);
    return 0;
}