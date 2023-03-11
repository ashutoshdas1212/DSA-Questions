#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void bfs(int **edges, int sv, int n, bool *visited)
{

    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while (!q.empty())
    {
        sv = q.front();
        q.pop();
        cout << sv << endl;
        // visited[sv] = true;
        for (int i = 0; i < n; i++)
        {
            if (i == sv)
            {
                continue;
            }
            if (edges[sv][i] == 1)
            {
                if (visited[i])
                {
                    continue;
                }
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        /* code */
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            bfs(edges, i, n, visited);
        }
      
    }
    return 0;
}