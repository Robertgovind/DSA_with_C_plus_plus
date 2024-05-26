#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMissing(int *arr, int n)
{
    if (n == 0)
        return make_pair(-1, -1);

    if (n == 1)
        return make_pair(1, -1);
    int missing = -1;
    int selected = -1;

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += arr[i];

    missing = (n * (n + 1) / 2) - sum;

    sort(arr, arr + (n - 1));

    int index = n - missing - 1;

    if (index >= 0 && index < n - 1)
    {
        selected = arr[index];
    }
    return make_pair(missing, selected);
}
int main()
{
    int n;
    cin >> n;
    int arr[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    pair<int, int> ans = findMissing(arr, n);
    cout << ans.first << " " << ans.second;
    return 0;
}
