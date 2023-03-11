#include <iostream>
using namespace std;
void print(int input[], int n, int k, int si, vector<int> v)
{
    if (si == n)
    {
        if (k == 0)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            return;
        }
        else
        {
            return;
        }
    }
    int x = input[si];
    print(input, n, k, si + 1, v);
    v.push_back(x);
    print(input, n, k - input[si], si + 1, v);
}
void printSubsetSumToK(int input[], int size, int k)
{
    vector<int> v;
    print(input, size, k, 0, v);
}

int main()
{
    int input[1000], length, k;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    cin >> k;
    printSubsetSumToK(input, length, k);
}



#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}