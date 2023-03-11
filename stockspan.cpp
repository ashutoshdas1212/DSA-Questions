int *stockSpan(int *price, int size)
{
    int i = 0;
    stack<int> s;
    queue<int> q;
    while (i < size)
    {
        s.push(price[i]);
        q.push(price[i]);
        i++;
    }
    stack<int> stock;
    int a = 0;
    while (a < size)
    {
        int x = s.top();
        queue<int> temp;
        temp = q;
        int cnt = 0;
        while (!temp.empty() && temp.front() != x)
        {
            if (temp.front() <= x)
            {
                cnt++;
            }
        }
        stock.push(cnt+1);

        a++;
    }
    int c = 0;

    while (!stock.empty())
    {
        price[c] = stock.top();
        stock.pop();
        c++;
    }
    return price;
}