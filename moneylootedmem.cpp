int helper(int *arr, int n, int wt, int *dp, int i)
{
    if (i >= n)
    {
        return wt;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }

    int a = helper(arr, n, wt + arr[i], dp, i + 2);
    int b = helper(arr, n, wt, dp, i + 1);

    return max(a, b);
}
int maxMoneyLooted(int *arr, int n)
{
    int *dp = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        dp[i] = -1;
    }
    return helper(arr, n, 0, dp, 0);
}