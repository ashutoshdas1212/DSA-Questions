#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
int bin(int a[],int s,int e,int key)
{
    if(s>=e)
    {
        return -1;
    }
    int mid=(s+e)/2;
    if(key==a[mid])
    return mid;
    else if(key<a[mid])
    return bin(input,s,mid-1,key);
    else
    return bin(input,mid+1,e,key);
    
    
}
int binarySearch(int input[], int n, int key)
{
   return bin(input,0,n-1,key);
}
int main()
{
    int input[100000], length, element, ans;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> input[i];
        ;
    }

    cin >> element;
    ans = binarySearch(input, length, element);
    cout << ans << endl;
}