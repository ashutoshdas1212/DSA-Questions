int arrayRotateCheck(int *a, int n)
{
    int x[100];
    for(int i  = 0 ; i < n ; i++)
    {
       x[i]=a[i];
    }
    sort(x,x+n);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x[i])
        return i;
    }
}
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}