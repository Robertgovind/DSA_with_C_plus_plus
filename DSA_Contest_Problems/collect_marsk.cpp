#include <iostream>
#include <vector>
#include <queue>
using namespace std;

long long totalMark(vector<long long> ropes)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (auto i : ropes)
    {
        pq.push(i);
    }
    long long tMark = 0;
    while (pq.size() > 1)
    {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        long long c = a + b;
        tMark += c;
        pq.push(c);
    }
    return tMark;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> marks(n);
    for (int i = 0; i < n; ++i)
    {
        long long ele;
        cin >> ele;
        marks[i] = ele;
    }
    long long ans = totalMark(marks);
    cout << ans;
    return 0;
}