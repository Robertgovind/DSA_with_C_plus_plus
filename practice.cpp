#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingInteger(vector<int>& nums) {
        
    }
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans,length,breadth;
        double diagonal=-1,dig;
        for(int i=0;i<dimensions.size();i++){
            length=dimensions[i][0];
            breadth=dimensions[i][1];
            dig=sqrt(length*length+breadth*breadth);
            if(dig>=diagonal){
                ans=length*breadth;
                diagonal=dig;
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> dim ={{2,8}};
    cout<<areaOfMaxDiagonal(dim)<<endl;
    return 0;
}