#include <bits/stdc++.h>
int buyTicket(int *arr, int n, int k)
{
    queue<int> q;
    priority_queue<int> pq;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        q.push(i);
        pq.push(arr[i])
    }
    while (!q.empty())
    {
        if (arr[q.front()] != pq.top())
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }

        else if (arr[q.front()] == pq.top())
        {
            int y = q.front();
            q.pop();
            pq.pop();
            cnt++;
            if (y == k)
            {
                return cnt;
            }
        }
    }
    return cnt;
}
