#include <bits/stdc++.h>
#include <iostream>
using namespace std;
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    pair<int, int> p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    if (root == NULL)
    {

        return p;
    }
    pair<int, int> lp = getMinAndMax(root->left);// WRITE SEPERATELY
    pair<int, int> rp = getMinAndMax(root->right); // WRITE SEPERATELY
    p.first = min(root->data, min(lp.first,
                                  rp.first));
    p.second = max(root->data, max(lp.second,
                                   rp.second));
    return p;
}