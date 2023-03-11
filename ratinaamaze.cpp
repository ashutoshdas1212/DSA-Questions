
#include <bits/stdc++.h>
using namespace std;
bool ispossible(int **a, int **visited, int row, int col, int n)
{
    if (row >= n || col >= n || row < 0 || col < 0 || visited[row][col] == 1 || a[row][col] == 0)
    {
        return false;
    }
    return true;
}
void maze(int **a, int **visited, int row, int col, int n)
{
    if (row == n - 1 && col == n - 1)
    {
        visited[row][col] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << visited[i][j] << " ";
            }
        }
        visited[row][col] = 0;
        cout << endl;
        return;
    }
    if (ispossible(a, visited, row, col, n))
    {
        visited[row][col] = 1;
        maze(a, visited, row + 1, col, n);
        maze(a, visited, row - 1, col, n);
        maze(a, visited, row, col + 1, n);
        maze(a, visited, row, col - 1, n);
        visited[row][col] = 0;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int **visited = new int *[n];
    for (int i = 0; i < n; i++)
    {
        visited[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    maze(a, visited, 0, 0, n);

    return 0;
}
