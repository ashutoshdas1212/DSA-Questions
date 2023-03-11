#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool haspath(int **edges, int sv, int n, bool *visited, int v1, int v2)
{
    visited[sv] = true;
    if (sv == v2)
    {
        return true;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
        {
            continue;
        }
        if (edges[sv][i] && !visited[i])
        {
            if (haspath(edges, i, n, visited, v1, v2))
            {
                return true;
            }
        }
    }
    return false;
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
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    int v1, v2;
    cin >> v1 >> v2;
    cout << haspath(edges, v1, n, visited, v1, v2);

    return 0;
}