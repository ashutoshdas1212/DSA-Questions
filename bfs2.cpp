#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int **edges,int n,int sv,bool *visited)
{
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    
    while(!q.empty())
    {
        sv=q.front();
        q.pop();
        cout<<sv<<" ";
        for(int i  =0  ; i <n  ; i++)
        {
            if(i==sv && !visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
            
        }
    }
    
}
void BFS(int** edges,int n)
{
    bool *visited=new bool[n];
    for(int i  =0  ; i <n  ; i++)
    {
        visited[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
       if(!visited[i])
       {
        print(edges,n,i,visited);
       }
    }
}

int main()
{
    // Write your code here
    int n;
    int e;
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

    BFS(edges, n);

    return 0;
}