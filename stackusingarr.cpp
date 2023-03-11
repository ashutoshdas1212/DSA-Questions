
#include <bits/stdc++.h>
#include "stackclass.cpp"
#include <iostream>
using namespace std;
int main()
{
    stackusingarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(60);
    s.push(60);
    s.push(60);
    s.push(60);
    s.pop();
    s.pop();
   
    cout<<s.size();
}