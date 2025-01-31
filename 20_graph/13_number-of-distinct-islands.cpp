#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, vector<pair<int, int>> &vct, int brow, int bcol)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        vct.push_back({row - brow, col - bcol});

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1)
            {
                dfs(nrow, ncol, vis, grid, vct, brow, bcol);
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> islands;

        // DFS calls
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vector<pair<int, int>> vct;
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, vis, grid, vct, i, j);
                    islands.insert(vct);
                }
            }
        }
        return islands.size();
    }
};