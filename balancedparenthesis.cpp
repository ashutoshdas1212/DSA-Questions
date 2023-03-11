#include <bits/stdc++.h>
#include <stack>
#include <iostream>
using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    if (str.length() % 2 != 0)
    {
        return false;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == ']' || str[i] == '}' || str[i] == ')')
        {
            char a = str[i];
            while (s.top() != '[' && s.top() != '{' && s.top() != '(' && !s.empty())
            {
                s.pop();
            }
            //    if(s.empty())
            //    {
            //        return false;
            //    }
            if (a == ']' && s.top() == '[')
            {
                s.pop();
            }
            else if (a == '}' && s.top() == '{')
            {
                s.pop();
            }
            else if (a == ')' && s.top() == '(')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
   
        return false;
    
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}