#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> temp(r,vector<int>(c,0));
    int row = mat.size(), col = mat[0].size();
    int a = 0, b = 0;
    if ((r * c) != (row * col))
    {
        return mat;
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (b < c)
                {
                    temp[a][b++] = mat[i][j];
                }
                else
                {
                    a++;
                }
            }
        }
    }
    return temp;
}

int main()
{
    vector<vector<int>> arr = {{1, 2}, {4,5},};
    for (auto i : arr)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans = matrixReshape(arr, 2, 4);
    for (auto i : ans)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}