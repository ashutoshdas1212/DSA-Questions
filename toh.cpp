void towerOfHanoi(int n, char src, char aux, char dest)
{
if(n==1)
{
    cout<<src<<" "<<dest<<"\n";
}
towerOfHanoi(n-1,src,dest,aux);
towerOfHanoi(n-1,aux,src,dest);
}
