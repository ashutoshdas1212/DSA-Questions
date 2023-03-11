int calculate(int input[], int n, int sum)
{
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += input[i];
    }
    int sum2 = sum1 - sum;
    if (sum2 == sum)
    {
        return true;
    }
    return false;
}
bool split(int input[], int n, int sum)
{
    if (n == 0)
    {
        return false;
    }
    bool flag = calculate(input, n, sum);
    if (sum % 5 == 0 && sum % 3 != 0)
    {
        if (flag)
        {
            return true;
        }
    }
    split(input + 1, n - 1, sum);
    split(input + 1, n - 1, sum + input[0]);
}
bool splitArray(int *input, int size)
{
    int sum = 0;
    split(input, size, sum);
}
