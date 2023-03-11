#include <bits/stdc++.h>

int helper(int *weights, int *values, int n, int w, int  int **output)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (output[n][w] != -1)
    {
        return output[n][w];
    }
    if (weights[0] > w)
    {
        int ans = helper(weights + 1, values + 1, n - 1, w,  output);
        output[n][w] = ans;
        return ans;
    }
   
    int ans1 = values[0] + helper(weights + 1, values + 1, n - 1, w - weights[0],  output);
    int ans2 = helper(weights + 1, values + 1, n - 1, w,  output);
    int ans = max(ans1, ans2);
    output[n][w] = ans;
    return ans;
}
int knapsack(int *weights, int *values, int n, int maxwt)
{
    int **output = new int *[n + 1];
    for (int i = 0; i <= n; i++)
    {
        output[i] = new int[maxwt + 1];
        for (int j = 0; j <= maxwt; j++)
        {
            output[i][j] = -1;
        }
    }
    return helper(weights, values, n, maxwt,  output);
}