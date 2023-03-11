#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countBracketReversals(string str)
{
    if (str.length() % 2 != 0)
    {
        return -1;
    }
    stack<char> s;
    int i = 0;
    int len = str.length();
    while (i < len)
    {
        if (str[i] == '{')
        {
            s.push(str[i]);
        }
        if (str[i] == '}')
        {
            if (s.empty())
            {
                break;
            }
            else if (s.top() == '{' && !s.empty())
            {
                s.pop();
            }
        }
        i++;
    }
    stack<char> snew;
    if (s.empty())
    {
        return 0;
    }
    else
    {
        while (!s.empty)
        {
            snew.push(s.top());
            s.pop();
        }
        int count = 0;
        while (!s.empty())
        {
            char c1 = s.top();
            s.pop();
            char c2 = s.top();
            if (c1 == c2)
            {
                count += 1;
            }
            else if (c1 != c2)
            {
                count += 2;
            }
        }
    }

    return count;
}