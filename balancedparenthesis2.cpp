#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool checkRedundantBrackets(string str)
{
    stack<char> s;
    int len = str.length();
    int i = 0;
    bool valid = false;
    while (i++ < len)
    {
        if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
        {
            s.push(str[i]);
        }
        if (str[i] == ')')
        {
            if (s.top() == '(')
            {
                valid = true;
            }
            else
            {
                while (!s.empty() && s.top() != '(')
                {
                    s.pop();
                }
                if (s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    valid = true;
                }
            }
        }
    }
    if (s.empty() && valid)
        return true;
    return false;
}