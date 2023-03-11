int helper(int *arr,int n,int wt)
{
    if(n<=0)
    {
        return wt;
    }
    
    int a=helper(arr+2,n-2,wt+arr[0]);
    int b=helper(arr+1,n-1,wt);
    
    return max(a,b);
}
int maxMoneyLooted(int *arr, int n)
{
   return helper(arr,n,0);
}