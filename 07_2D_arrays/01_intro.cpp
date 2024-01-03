#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter the data of the array :"<<endl;

    //taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //taking input column wise
    for(int col=0;col<3;col++){
        for(int row=0;row<3;row++){
            cin>>arr[col][row];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;;
    }


    return 0;
}