#include <bits/stdc++.h>

void findMedian(int *arr, int n)
{
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
       
            if (i % 2 != 0)
            {
                v.push_back(arr[((i + 1) / 2) - 1]);
            }
        
            else
            {
                priority_queue<int> pq1;
                priority_queue<int, vector<int>, greater<int>> pq2;

                for (int x = 1; x <= i / 2; x++)
                {
                    pq1.push(arr[x - 1])
                }
                for (int x = i / 2; x <= i; x++)
                {
                    pq2.push(arr[x - 1])
                }
                int y = pq1.top() + pq2.top()
                    v.push_back(y/2);
            }
        
    }
    for(int i  =0  ; i <v.size()  ; i++)
    {
        cout<<v[i]<<" ";
    }
}