#include <iostream>
using namespace std;

pair<int, int> searchIndex(int arr[][3], int target)
{
    pair<int, int> temp;
    temp.first = -1;
    temp.second = -1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                temp.first = i;
                temp.second = j;
                return temp;
            }
        }
    }
    return temp;
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
    cout << "Enter the target element :" << endl;
    int target;
    cin >> target;

    pair<int , int> ans=searchIndex(arr,target);
    cout<<ans.first<<","<<ans.second<<endl;

    return 0;
}