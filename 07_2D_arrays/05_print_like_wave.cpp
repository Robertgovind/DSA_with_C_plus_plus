#include<iostream>
#include<vector>
using namespace std;

vector<int> printLikeWave(int arr[][3],int row,int col){
    vector<int> temp;
    for(int i=0;i<col;i++){
        if(i&1){//case of odd column : top to buttom 001&001=0001(1) use i&1

        for(int j=row-1;j>=0;j--){
        temp.push_back(arr[j][i]);
        }

        }
        else{ //case of even numbers
            for(int j=0;j<row;j++){
            temp.push_back(arr[j][i]);
            }
        }
    }
    return temp;
}

// 1 2 3
// 4 5 6
// 7 8 9


int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=printLikeWave(arr,3,3);
    for(int i:ans)
    cout<<i<<" ";
    return 0;
}