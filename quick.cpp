
int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int i = s, j = s - 1;
    for (; i < e; i++)
    {
        if (a[i] <= pivot)
        {
            j++;
            swap(a[i], a[j]);
        }
    }
    swap(a[j+1],a[e]);
    return j+1;
}
void quick(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);
    quick(a, s, p - 1);
    quick(a, p + 1, e);
}
void quickSort(int input[], int size)
{
    quick(input, 0, size - 1);
}

       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
      
return 0;
}