// Matrix is sorted row wise 
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(),col=matrix[0].size();
    int start=0,end=(row*col)-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int element=matrix[mid/col][mid%col];
        if(element==target)
        return true;
        if(element<target)
        start=mid+1;
        if(element>target)
        end=mid-1;

        mid=start+(end-start)/2;
    }
    return false;
    }

int main(){
    vector<vector<int>> arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    for(auto i:arr){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<searchMatrix(arr,60);
}