#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<char> v;
void ps(char s[])
{
    int len = strlen(s);
    if (len == 0)
    {
        return;
    }

    v.push_back(s[0]);
    if (s[0] == s[1])
    {
        v.push_back('*');
    }
    ps(s + 1);
}
void pairStar(char inp[])
{
    int i = 0;
    ps(inp);
    for (; i < v.size(); i++)
    {
        inp[i] = v[i];
       
    }
    inp[i] = '\0';
}
int main()
{
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}

// void pairStar(char s[])
// {
//  vector<char> v;
// int len=strlen(s);
// for(int i=0;i<len;i++)
// {

//     v.push_back(s[i]);
//     if (s[i] == s[i + 1])
//     {
//         v.push_back('*');
//     }
// }

// int i=0;
// for( ; i <v.size()  ; i++)
// {
//     s[i]=v[i];
// }
// s[i]="\0";

// }