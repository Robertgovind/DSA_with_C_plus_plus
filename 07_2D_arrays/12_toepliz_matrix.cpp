#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int ans=matrix[0][0];
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=0;j<matrix[0].size()-1;j++){
            if(matrix[i][j]!=matrix[i+1][j+1])
            return false;
        }
    }        
    return true;
}

int main(){
    vector<vector<int>> mat={{1,2,3,4},{2,1,3,4},{2,3,1,5}};
    cout<<isToeplitzMatrix(mat)<<endl;
}