#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(int arr[][3],int n,int m){
    vector<int> temp;
    int firstRow=0;
    int lastRow=n-1;
    int firstColumn=0;
    int lastColumn=m-1;
    int count=0;
    while (count<n*m)
    {
        //first row
        for(int i=firstColumn;i<=lastColumn && count<n*m;i++){
            temp.push_back(arr[firstRow][i]);
            count++;
        }
        firstRow++;

        //last column
        for(int i=firstRow;i<=lastRow && count<n*m;i++){
            temp.push_back(arr[i][lastColumn]);
            count++;
        }
        lastColumn--;

        //last row
        for(int i=lastColumn;i>=firstColumn && count<n*m;i--){
            temp.push_back(arr[lastRow][i]);
            count++;
        }
        lastRow--;

        //first column
        for(int i=lastRow;i>=firstRow && count<n*m;i--){
            temp.push_back(arr[i][firstColumn]);
            count++;
           }
        firstColumn++;
    }
    return temp;
}


int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = spiralMatrix(arr,3,3);
    for(int i: ans)
        cout<<i<<" ";

    return 0;
}