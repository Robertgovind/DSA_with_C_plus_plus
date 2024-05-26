#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkRow(const vector<int> &row, int n)
{
    unordered_set<int> seen;
    for (int num : row)
    {
        if (num < 1 || num > n || seen.count(num))
        {
            return false;
        }
        seen.insert(num);
    }
    return true;
}

bool checkColumn(const vector<vector<int>> &matrix, int colIndex, int n)
{
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i)
    {
        int num = matrix[i][colIndex];
        if (num < 1 || num > n || seen.count(num))
        {
            return false;
        }
        seen.insert(num);
    }
    return true;
}

bool isValidMatrix(const vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (!checkRow(matrix[i], n) || !checkColumn(matrix, i, n))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    if (isValidMatrix(matrix, n))
    {
        cout << "The matrix is valid." << endl;
    }
    else
    {
        cout << "The matrix is invalid." << endl;
    }

    return 0;
}
