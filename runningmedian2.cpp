#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void findMedian(int *arr, int n)
{
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    for (int i = 0; i < n; i++)
    {
        if (maxheap.size() && arr[i] > maxheap.top())
        {
            minheap.push(arr[i]);
        }
        else
        {
            maxheap.push(arr[i]);
        }
        if (abs((int)maxheap.size() - (int)minheap.size()) > 1)
        {
            if (maxheap.size() > minheap.size())
            {
                int x = maxheap.top();
                maxheap.pop();
                minheap.push(x);
            }
            else
            {
                int x = minheap.top();
                minheap.pop();
                maxheap.push(x);
            }
        }

        int totalsize = maxheap.size() + minheap.size();
        int median = 0;
        if (totalsize % 2 == 1)
        {
            if (maxheap.size() > minheap.size())
            {
                median = maxheap.top();
            }
            else
            {
                median = minheap.top();
            }
        }
        else
        {
            if (!maxheap.empty())
            {
                median += maxheap.top();
            }
            if(!minheap.empty())
            {
                median += minheap.top();
            }
            median=median/2;
        }
        cout<<median;
    }
}