#include <bits/stdc++.h>

int lis(int *arr, int n, int x, int cnt)
{
    if (n == 0)
    {
        return cnt;
    }

    if (arr[0] > x)
    {
        cnt++;
        x = arr[0];
    }
    return lis(arr + 1, n - 1, x, cnt);
}
int longestIncreasingSubsequence(int *arr, int n)
{
    return lis(arr, n, INT_MIN, 0);
}