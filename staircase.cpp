int cnt=0;
int stair(int n)
{
    if(n==0)
    {
        cnt++;
    }
    stair(n-1);
    stair(n-2);
    stair(n-3);
}
int staircase(int n)
{
 stair(n);
 return cnt;
}