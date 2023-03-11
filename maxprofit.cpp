int maximumProfit(int budget[], int n)
{
    sort(budget,budget+n);
    int mx=INT_MIN;
    for(int i  =0  ;  i<n  ; i++)
    {
        mx=max(budget[i]*(n-i-1),mx);
    }
    return mx;
}
