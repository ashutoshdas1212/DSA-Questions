#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int subs(string input, string output[])
{
    if (input.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    string s = input.substr(1);
    int ssize = subs(s, output);
    for (int i = 0; i < ssize; i++)
    {
        output[i + ssize] = input[0] + output[i];
    }
    return 2 * ssize;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    string input;
    cout << "enter string\n";
    cin >> input;
    string output[1000];
    int count = subs(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << "\n";
    }
    return 0;
}