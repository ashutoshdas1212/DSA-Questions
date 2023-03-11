#include <bits/stdc++.h>

void printIntersection(int arr1[], int arr2[], int n, int m)
{
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;

    for (int i = 0; i < n; i++)
    {
        mp1[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[arr2[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp1[arr1[i]] > 0)
        {
            if (mp2[arr1[i]] > 0)
            {
                int x = mp1[arr1[i]] * mp2[arr2[i]];
                for (int y = 0; y < x; y++)
                {
                    cout << arr1[i] << endl;
                }
                mp1[arr1[i]]=0;
                mp2[arr2[i]]=0;
            }
        }
    }
}