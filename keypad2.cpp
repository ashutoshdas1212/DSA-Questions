#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string s1 = "";
string s2 = "abc";
string s3 = "def";
string s4 = "ghi";
string s5 = "jkl";
string s6 = "mno";
string s7 = "pqrs";
string s8 = "tuv";
string s9 = "wxyz";
string str(int n)
{
    if (n == 1 || n == 0)
        return s1;
    if (n == 2)
        return s2;
    if (n == 3)
        return s3;
    if (n == 4)
        return s4;
    if (n == 5)
        return s5;
    if (n == 6)
        return s6;
    if (n == 7)
        return s7;
    if (n == 8)
        return s8;
    if (n == 9)
        return s9;
}
int keypad(int num, string output[])
{
    int rem = num % 10;
    int smallsize = keypad(num / 10, output);
    string s;
    strcpy(s, str(rem));
    for (int i = 0; i < smallsize; i++)
    {
      output[i]=output[i]+s[i];
    }
}
int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
