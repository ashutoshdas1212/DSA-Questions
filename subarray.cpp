#include <bits/stdc++.h>

int lengthOfLongestSubsetWithZeroSum(int *arr, int n)
{
    unordered_map<int,int>mp;
    
    int x[n]={0};
    int sum=0;
    int mx=INT_MIN;
    for(int i  = 0 ; i <n  ; i++)
    {
        sum+=arr[i];
        x[i]=sum;
        int x=0;
        if(mp[sum]>0)
        {
            x=i;
        }
        mx=max(mx,i-mp[sum]);
        mp[sum]=i;
    }
    return mx;
    
}