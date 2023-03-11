#include <bits/stdc++.h>
#include <iostream>
int cnt = 0;
int stn(char s[], int num)
{
    int a = input[0] - '0';
    int len = strlen(s);
    if (a > 0)
    {
        cnt++;
    }
    if (len == 0)
    {
        return num;
    }
    if (cnt > 0)
    {
        num += a * pow(10, len - 1);
    }
    return stn(s + 1, num);
}
int stringToNumber(char input[])
{
    int num = 0;
    return stn(input, num);
}