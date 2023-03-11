#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void subset(int input[], int n, int output[][50], int k, int sum, vector<int> v)
{
    if (n == 1)
    {
        if (sum == k)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        return;
    }

    subset(input + 1, n - 1, output, k, sum, v);
    v.push_back(input[0]);
    subset(input + 1, n - 1, output, k, sum + input[0], v);
}

void subsetSumToK(int input[], int n, int output[][50], int k)
{
    vector<int> v;
   // v.push_back(0);
     subset(input, n, output, k, 0, v);
}

int main()
{
    int input[20], length, output[10000][50], k;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    cin >> k;
    subsetSumToK(input, length, output, k);
    // int size = subsetSumToK(input, length, output, k);

    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 1; j <= output[i][0]; j++)
    //     {
    //         cout << output[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
