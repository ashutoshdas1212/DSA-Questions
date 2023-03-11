#include <bits/stdc++.h>
map<int, int> mp;
void pair1(int a[], int n, int num, int sum,int z)
{
    if (n == 0 || z==0)
        return;
    if (sum == num)
    {
        mp[num]++;
    }
    pair1(a + 1, n - 1,num, sum,z-1);
    pair1(a + 1, n - 1,num, sum + a[0],z-1);
}
int pairSum(int *arr, int n, int num)
{
    int sum = 0;
    int z = 2;
    pair1(arr, n, num, sum,z);
    
    return mp[num];
    
}



