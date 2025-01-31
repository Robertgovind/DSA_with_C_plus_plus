#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double count = customers[0][0] + customers[0][1];
        double ans = count - customers[0][0];

        for (int i = 1; i < customers.size(); i++)
        {
            if (count < customers[i][0])
                count = customers[i][0];
            count += customers[i][1];
            ans += (count - customers[i][0]);
        }
        return ans / customers.size();
    }
};