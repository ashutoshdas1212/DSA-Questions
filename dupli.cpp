
       

vector<char> v;
void remove(char s[])
{
    if(strlen(s)==0)
    return;
    
    if(s[0]!=s[1])
    v.psuh_back(s[0]);
}
void removeConsecutiveDuplicates(char *inp)
{
   remove(inp);
   int i=0;
   for(  ; i <v.size()  ; i++)
   {
    inp[i]=v[i];
   }
   inp[i]='\0';
}