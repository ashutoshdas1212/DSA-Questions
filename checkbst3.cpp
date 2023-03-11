
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool check(BinaryTreeNode<int> *root,int min,int max)
{
    if(root==NULL)
    return true;
    
    if(root->data<min && root->data>max)
    {
        return false;
    }
    bool leftcheck=check(root->left,min,root->data-1);
    bool rightcheck=check(root->right,root->data,max);
    
    return leftcheck && rightcheck;
}

    bool isBST(BinaryTreeNode<int> *root)
{
     return check(root,INT_MAX,INT_MIN);
}