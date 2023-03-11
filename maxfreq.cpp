#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}
int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> mp ;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx=max(mx,mp[arr[i]]);
    }
    return mx;
}