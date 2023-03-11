#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
 int keypad(int num,string output[],string options[])
 {
 if(num==0)
 {
    output[0]="";
    return 1;
 }
 int lastdigit=num%10;
 int smallnum=num/10;
 int ssize=keypad(smallnum,output,options);
 string s=options[lastdigit];
 for(int i  =0  ; i < s.length()-1 ; i++)
 {
     for (int j = 0; j < ssize; j++)
     {
     output[j+ (i+1)*ssize]=output[j];
     }
 }
 int k=0;
 for (int i = 0; i < s.length(); i++)
 {
     for (int j = 0; j < ssize; j++)
     {
         output[k]=output[k]+s[i];
         k++;
     }
    
 }
 return s.size()*ssize;
 }
       
int keypad(int num,string output[])
{
    string options[]={"","","abc","def","ghi","jkl",
    "mno","pqrs","tuv","wxyz"};
   return keypad(num,output,options);
}