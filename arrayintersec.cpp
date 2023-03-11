
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void intersection(int *a1, int *a2, int n, int m)
{
    map<int, int> mp1;
    map<int, int> mp2;

    for (int i = 0; i < n; i++)
    {
        mp1[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[a2[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp2[a1[i]] > 0)
        {
        cout<<min(mp1[a[i]],mp2[a1[i])<<" ";
        }
    }
    cout << endl;
}