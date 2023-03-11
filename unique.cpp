string uniqueChar(string str)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        s = "";
        if (mp[str[i]] > 0)
        {
            s += str[i];
            mp[str[i]] = 0;
        }
    }
    return s;
}


}