#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getCodes(string input, string output[10000])
{
    if (input.length() == 0)
    {
        output[0] = "";
        return 1;
    }
    int size1 =0;
    size1= getCodes(input.substr(1), output);
    char ch1 = stoi("" + input[0]) + 96;
    for (int i = 0; i < size1; i++)
    {
        output[i] = ch1 + output[i];
    }
    int size2 = 0;
    if (input[1] != '\0')
    {
        char ch2 = stoi("" + input[0] + input[1]) + 96;
        if (stoi("" + input[0] + input[1]) >= 10 && stoi("" + input[0] + input[1]) <= 26)
        {
            size2 = getCodes(input.substr(2), output + size1);
            for (int i = 0; i < size2; i++)
            {
                output[i + size1] = ch2 + output[i + size1];
            }
        }
    }
    return size1 + size2;
}

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for (int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
