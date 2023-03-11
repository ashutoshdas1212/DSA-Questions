void rotate(int *a, int d, int n)
{
    vector<int> v;
    for (int i = 0; i < d; i++)
    {
        v.push_back(a[i]);
    }
    for (int i = 0; i < n - d; i++)
    {
        a[i] = a[i + d];
    }
    int k = 0;
    for (int i = n - d; i < n; i++)
    {
        a[i] = v[k++];
    }
}

       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}