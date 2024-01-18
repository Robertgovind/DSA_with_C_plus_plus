#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateImage(vector<vector<int>> dim){
    int n=dim.size();
    vector<vector<int>> temp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][n-1-i]=dim[i][j];
        }
    }
    return temp;
}

int main(){
    vector<vector<int>> dim ={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Original matrix :"<<endl;
    for(auto i:dim){
        for(int j:i)
        cout<<j<<" ";

        cout<<endl;
    }
    cout<<"Rotated matrix :"<<endl;
    vector<vector<int>> ans=rotateImage(dim);
    for(auto i:ans){
        for(int j:i)
        cout<<j<<" ";

        cout<<endl;
    }
    return 0;
}