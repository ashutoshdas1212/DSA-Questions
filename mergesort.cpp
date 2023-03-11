#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void merge(int a[], int s, int e)
{
    int mid = (s + e) / 2;
    int k = s, i = s, j = mid, temp[1000]={0};
   
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }
    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }
}
void ms(int a[], int s, int e)
{
    if(s>=e)
    {
        retrun;
    }
    int mid = (s + e) / 2;
    ms(a, s, mid);
    ms(a, mid + 1, e);
    merge(a, s, e);
}
void mergeSort(int a[], int n)
{
    if (n <= 1)
    {
        return;
    }
    ms(a, 0,n-1);
}
