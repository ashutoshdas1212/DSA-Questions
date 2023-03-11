#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
vector<string> v;
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

void keypad(int num, string output[])
{
    if (num == 0 || num == 1)
        return strlen(output);

    int rem;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        string a1 = str(rem);
        int len = strlen(a1);
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                string s = a1[i] + v[j];
                v.push_back(s);
            }
        }
    }
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[i] << " ";
    }

  //  return strlen(output);
}

int main()
{
    int num;
    cin >> num;
  
    string output[10000];
    keypad(num, output);
    // int count = keypad(num, output);
    // for (int i = 0; i < count && i < 10000; i++)
    // {
    //     cout << output[i] << endl;
    // }
    return 0;
}
