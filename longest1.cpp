#include <bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *a, int n)
{   vector<int> ans;
    unordered_map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = true;
    }
    int count=1;
    int maxl=1;
    int maxs=a[0];

    for (int i = 0; i < n; i++)
    {
        if(mp.find(a[i]-1)==mp.end())
        {
            int j=a[i];
            while(mp.find(j+1)!=mp.end())
            {
                j++;
                count++;
            }
        }
        if(count>maxl)
        {
            maxl=count;
            maxs=a[i];
        }
        count=1;
    }
    if(maxl==1)
    {
        ans.push_back(maxs);
        return ans;
        
    }
    ans.push_back(maxs);
    ans.push_back(maxs+maxl-1);
    return ans;;
}
