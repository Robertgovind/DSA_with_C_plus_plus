//Completed
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int count=0;
    vector<int> temp(matrix[0].size(),0);
    vector<int> idx;
    int rowSize=matrix.size(),colSize=matrix[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(matrix[i][j]==0){ //getting count of zeroes and store row and col no in vector
                count++;
                idx.push_back(i);
                idx.push_back(j);
            }
        }
    }
    for(int i=0;i<temp.size();i+=2){
        //setting row to zero
        for(int j=0;j<colSize;j++){
            matrix[idx[i]][j]=0;
        }
        //setting column to zero
        for(int j=0;j<rowSize;j++){
            matrix[j][idx[i+1]]=0;
        }
    }
    
}


int main(){
    vector<vector<int>> mat={{0,1,2,0},{3,4,5,2},{4,3,4,5}};
    for(auto i:mat){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    setZeroes(mat);
    
    for(auto i:mat){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}