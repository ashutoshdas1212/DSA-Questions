#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int subs(int input[], int n, int startindex, int output[][20])
{
    if (startindex == n)
    {
        output[0][0] =0;//size
        return 1;
    }
    int smallsize = subs(input, n, startindex + 1, output);
    for (int i = 0; i < smallsize; i++)
    {
        output[i + smallsize][0] = output[i][0] + 1;
        output[i + smallsize][1] = input[startindex];
        for (int j = 1; j <= output[i][0]; j++)
        {
            output[i + smallsize][j + 1] = output[i][j]
        }
    }
    return 2 * smallsize;
}

int subset(int input[], int n, int output[][20])
{
    return subs(input, n, 0, output);
}

int main()
{
    int input[20], length, output[35000][20];
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    int size = subset(input, length, output);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
