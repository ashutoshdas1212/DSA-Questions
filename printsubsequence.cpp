#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print(int num, string output, string options[])
{
    if (num == 0)
    {
        cout << output << "\n";
        return;
    }
    int lastdigit = num % 10;
    string s = options[lastdigit];
    for (int i = 0; i < s.length(); i++)
    {
        print(num/10,output+s[i],options);
    }
}
void printKeypad(int num)
{
    string output = " ";
    string options[] = {"", "", "abc", "def", "ghi", "jkl",
                        "mno", "pqrs", "tuv", "wxyz"};
    print(num, output, options);
}
