#include <iostream>
using namespace std;

int  maxRowSumIndex(int arr[][3])
{
   int sum=0;
   int index=-1;
   int maxSum=INT8_MIN;
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        if(maxSum<sum){
            index=i;
            maxSum=sum;
        }
    }
    return index;
}

int main()
{
    int arr[3][3];
    cout << "Enter the data of the array :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = maxRowSumIndex(arr);
    cout<<"Row with max sum is :"<<ans<<endl;

    return 0;
}