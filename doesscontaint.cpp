bool checksequenece(char large[], char *small)
{
if(strlen(small)==0)
{
    return true;
}
if(strlen(large)==0)
{
    return false;
}

if(small[0]==large[0])
{
    checksequenece(large+1,small+1);
}
else
{
    checksequenece(large + 1, small );
}

}

