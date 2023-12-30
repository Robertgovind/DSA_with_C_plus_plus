#include <iostream>
#include <vector>
using namespace std;

//My own code !!!
vector<vector<int>> pascalsTriangle(int r)
{
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < r; i++)
    {
        if (i == 0)
        {
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        else if (i == 1)
        {
            temp.push_back(1);
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        else
        {
            int start = 0, next = 1;
            int index=0;
            while (index <= ans[i - 1].size())
            {
                if (index == 0)   
                {
                    temp.push_back(1);
                    index++;
                }
                else if (index == i)
                {
                    temp.push_back(1);
                    index++;
                }
                else
                {
                    temp.push_back(ans[i-1][start++]+ans[i-1][next++]);
                    index++;
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
    }
    return ans;
}

//optimized code
vector<vector<int>> optimizedPascalsTriangle(int numRows) {
    vector<vector<int>> result;

    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1); // Initialize each row with 1s

        for (int j = 1; j < i; ++j) {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }

        result.push_back(row);
    }

    return result;
}

int main()
{
    vector<vector<int>> ans = optimizedPascalsTriangle(5);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}