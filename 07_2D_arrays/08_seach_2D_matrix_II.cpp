// Matrix is sorted row and column wise 
#include<iostream>
#include<vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int rowIindex=row-1,colIndex=0;
        while(rowIindex>=0 && colIndex<col) {
            int element=matrix[rowIindex][colIndex];
            if(element==target)
            return true;
            if(element>target)
            rowIindex--;
            if(element<target)
            colIndex++;
        }
        return false;
    }

 int main(){
    vector<vector<int>> arr={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}};
        cout<<searchMatrix(arr,26);
    return 0;
 }