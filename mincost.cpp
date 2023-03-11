int mincost(int **input,int m,int n,int i,int j)
{
    if (i >= m || j >= n)
    {
        return 0;
    }
    
    int cost=input[i][j];
    int x=micost(input,m,n,i+1,j);
    int y=micost(input,m,n,i,j+1);
    int z=micost(input,m,n,i+1,j+1);
    
    return cost + min(x,min(y,z));
}
int minCostPath(int **input, int m, int n)
{
   
    return mincost(input,m,n,0,0);
}