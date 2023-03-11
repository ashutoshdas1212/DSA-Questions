#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> *longest(BinaryTreeNode<int> *root, vector<int> v, int depth)
{
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(depth);
        return v;
    }
    else if (root->left == NULL)
    {
        longest(root->right, v, depth + 1);
    }
    else if (root->right == NULL)
    {
        longest(root->left, v, depth + 1);
    }
    else
    {
        longest(root->left, v, depth + 1);
        longest(root->right, v, depth + 1);
    }
}

vector<int> *longestPath(BinaryTreeNode<int> *root)
{
    vector<int> v;
    return longest(root, v, 0);
}
