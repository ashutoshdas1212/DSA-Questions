int minCount(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int x = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        x += mincount(n - pow(i, 2));
    }
    return x;
}