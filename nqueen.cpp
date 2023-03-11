#include <bits/stdc++.h>
using namespace std;
bool isPossible(int board[11][11], int row, int col)
{
    for (int i = row - 1, j = col - 1; i >= 0, j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0, j >= 0; i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, i >= 0; i--)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }
}
void nqueenhelper(int board[11][11], row)
{
    if (row == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (isPossible(board, row, column))
        {
            board[row][j] = 1;
            nqueenhelper(board, row + 1);
            board[row][j] = 0;
        }
    }
}

int main()
{

    int board[11][11];
    memeset(board, 0, 11 * 11 * sizeof(int));
    return 0;
}