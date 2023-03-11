#include <bits/stdc++.h>

int longestIncreasingSubsequence(int *arr, int n)
{
    dp[0] = 1;
    int *dp = new int[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (input[j] > input[i])
            {
                continue;
            }
            else
            {
                dp[i] = max(1 + dp[j], dp[i]);
            }
        }
    }

    return dp[n];
}