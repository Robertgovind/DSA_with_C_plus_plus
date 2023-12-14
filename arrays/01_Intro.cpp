#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // for loop
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // for each loop
    for (int arr : arr){
        cout << arr << " ";
    }
    return 0;
}