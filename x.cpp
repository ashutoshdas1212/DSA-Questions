#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool haspath(int **edges, int sv, int n, bool *visited, int v2)
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
            bool has_path = haspath(edges, i, n, visited, v2);
            if (has_path)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

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
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    int v1, v2;
    cin >> v1 >> v2;

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    bool flag = haspath(edges, v1, n, visited, v2);
    if (flag)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    // Free memory
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
    delete[] visited;

    return 0;
}
