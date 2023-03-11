#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int subset(int input[],int n,int output[][50],int k,int startindex)
{
    if(startindex==n)
    {
        output[0][0]=0;
        return 1;
    }
    int smallsize= susbet(input,n,output,k,startindex+1);
    for(int i  = 0 ;  <smallsize  ; i++)
    {
        output[i+smallsize][0]=output[i][0]+1;
        output[i + smallsize][1]=input[startindex];
        for (int j = 1; <output[0][j]; i++)
        {
            output[i+smallsize][j+1]=output[i][j];
        }
        return 2*smallsize;
}
int subsetSumToK(int input[], int n, int output[][50], int k)
{
    
return subset(input,n,output,k,0);
}
int main()
{
    int input[20], length, output[10000][50], k;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    cin >> k;

    int size = subsetSumToK(input, length, output, k);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
