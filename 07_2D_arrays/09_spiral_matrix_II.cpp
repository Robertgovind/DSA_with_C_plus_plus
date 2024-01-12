#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> temp(n,vector<int> (n,0));
        int count=1,firstRow=0,lastRow=n-1,firstCol=0,lastCol=n-1;
        int total=n*n;
        while(count<=total){
            //firstRow
            for(int i=firstCol;i<=lastCol && count<=total;i++){
                temp[firstRow][i]=count;
                count++;
            }
            firstRow++;
            //lastCol
            for(int i=firstRow;i<=lastRow && count<=total;i++){
                temp[i][lastCol]=count;
                count++;
            }
            lastCol--;
            //lastRow
            for(int i=lastCol;i>=firstCol && count<=total;i--){
                temp[lastRow][i]=count;
                count++;
            }
            lastRow--;
            //firstCol
            for(int i=lastRow;i>=firstRow && count<=total;i--){
                temp[i][firstCol]=count;
                count++;
            }
            firstCol++;
        }
        return temp;
    }

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    vector<vector<int>> ans=generateMatrix(n);
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}