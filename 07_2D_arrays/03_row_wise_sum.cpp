#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3])
{
   int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Row "<<i<<" sum "<<sum;
        cout<<endl;
    }
    
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
    rowWiseSum(arr);
    

    return 0;
}