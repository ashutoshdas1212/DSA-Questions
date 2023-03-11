#include <bits/stdc++.h>
#include<iostream>

int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if(mp[arr[i]+3]>0)
        {
             x+=max(mp[arr[i]],mp[arr[i]+3]);
        }
        if(mp[arr[i]-3]>0)
        {
            x+=max(mp[arr[i]], mp[arr[i] - 3]);
        }
        mp[arr[i]]=0;
    }
    
    return x;
}