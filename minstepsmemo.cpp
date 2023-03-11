void count(int n, int *ans)
{
    int x;
    if (ans[n - 1] != -1)
    {
        x = ans[n - 1]
    }
    else
    {
        x = count(n - 1, ans);
    }

    if (n % 2 == 0)
    {
        if (ans[n / 2] != -1)
        {
            y = ans[n / 2];
        }
        else
            int y = count(n / 2, ans);
    }
    if (n % 3 == 0)
    {
        if (ans[n / 3] != -1)
        {
            y = ans[n / 3];
        }
        else
            int y = count(n / 3, ans);
    }
    int a = 1 + min(x, min(y, z));
    if (ans[n] == -1)
    {
        ans[n] = a;
    }
}
int countStepsToOne(int n)
{

    int *ans = new int(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = -1;
    }
    count(n, ans);

    return ans[n];
}