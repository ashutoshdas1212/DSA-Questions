#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void get(string input, string output[10000], int si, vector<string> v, int n, string s)
{
    if (si > n)
    {
        return;
    }
    else if (si + 1 == n)
    {
        return;
    }
    else if (si == n)
    {
        v.push_back(s);
        return;
    }
    int x = stoi("" + input[si]);
    int y = stoi("" + input[si] + input[si + 1]);
    char c1 = 96 + x;
    char c2 = 96 + y;
    cout << c1 << " " << c2 << " \n";
    get(input, output, si + 1, v, n, s + c1);
    get(input, output, si + 2, v, n, s + c2);
    return;
}
int getCodes(string input, string output[10000])
{
    string s = "" + input[0];
    vector<string> v;
    int len = input.length();
    get(input, output, 1, v, len, s);
    for (int i = 0; i < v.size(); i++)
    {
        output[i] = v[i];
    }
    return v.size();
}
