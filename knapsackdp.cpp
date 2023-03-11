
int knapsack(int *weights, int *values, int n, int maxwt)
{

    int **dp = new int *[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = new int[maxwt+1];
    }
    for(int i  = 0 ; i <=n  ; i++)
    {
          dp[i][0]=0;
    }
    for(int i  = 0 ; i <=maxwt  ; i++)
    {
          dp[0][i]=0;
    }
    for (int i = 1; i <= n; i++)
    {
          for (int j = 1; j <= maxwt; j++)
          {
            dp[i][j]=max(dp[i-1][j],values[i]+dp[i-1][j-weights[i]]);
          }
    }
    return dp[n][maxwt];
}