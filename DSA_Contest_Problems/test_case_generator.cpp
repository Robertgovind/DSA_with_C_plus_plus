#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << endl;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        arr[i - 1] = i;
    }

    cout << endl;
    unsigned seed = 0;
    shuffle(arr, arr + n,
            default_random_engine(seed));
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}