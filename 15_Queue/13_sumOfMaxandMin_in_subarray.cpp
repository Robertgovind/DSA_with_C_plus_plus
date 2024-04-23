#include <iostream>
#include <queue>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);

    for (int i = 0; i < k; i++)
    {

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[maxi.front()] + arr[mini.front()];

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main()
{
    int arr[] = {};
    return 0;
}