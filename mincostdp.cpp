#include <bits/stdc++.h>

int minCostPath(int **input, int m, int n)
{
    int **output = new int *[m];
    for(int i  =0  ; i < m ; ++)
    {
        output[i]=new int[n];
    }

    output[m - 1][n - 1] = input[m - 1][n - 1];

    for (int j = n - 2; j >= 0; j--)
    {
        output[m - 1][j] = input[m - 1][j] + output[m - 1][j + 1];
    }
    for (int i = m - 2; i >= 0; i--)
    {
        output[i][n - 1] = input[i][n - 1] + output[i + 1][n - 1];
    }

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            output[i][j] = input[i][j] + min(output[i + 1][j], min(output[i + 1][j + 1], output[i][j + 1]));
        }
    }
    return output[0][0];
}