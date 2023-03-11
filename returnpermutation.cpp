#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int permutation(string input, string output[], unordered_map<int> mp;)
{
    if (input.length() == 0)
    {
        output[0] = "";
        return 1;
    }
    
    
}
int returnPermutations(string input, string output[])
{
 unordered_map<int> mp;
 mp['a']=0;
 mp['b']=0;
 mp['c']=0;
    return permutions(input,output,mp);
}
int main()
{
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}