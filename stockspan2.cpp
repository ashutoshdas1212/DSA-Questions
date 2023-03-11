int *stockSpan(int *price, int size)
{
    stack<int> s;
    int i = 1;
    queue<int> q;
    q.push(1);
    s.push(0);
    
    while (i < size)
    {
        
        if(price[i]<price[i-1])
        {
            int x=i-1;
            while(price[i]<price[x])
            {
                x--;
            }
            q.push(i-x);
        }
        else if (price[i] > price[i - 1])
        {
            while(price[i]>price[s.top()])
            {
                s.pop();
            }
            s.push(i);
        }

            i++;
    }
    int *arr=new arr(10);
    int c=0;
    while(!q.empty())
    {
        arr[c]=q.front();
        c++;
    }
    return arr;
}