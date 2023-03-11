
#include<iostream>
using namespace std;
       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}
int pairSum(int *arr, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (mp[-arr[i]] > 0)
            {
                x += mp[arr[i]] * mp[-arr[i]];
            }
            mp[arr[i]] = 0;
            mp[-arr[i]] = 0;
        }
    }
    return x;
}