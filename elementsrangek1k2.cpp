#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printk(BinaryTreeNode<int> *root, int k1, int k2)
{
    if(root==NULL)
    {
        return;
    }
    if (root->data >= k1 && root->data <= k2)
    {
        pq.push(root->data);
    }
    if (k2 < root->data)
    {
        printk(root->left, k1, k2);
    }

    else if (k1 > root->data)
    {
        printk(root->right, k1, k2);
    }

    else
    {
        printk(root->left, k1, k2);
        printk(root->right, k1, k2);
    }

    return;
}
void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{
    
    printk(root, k1, k2);
  
}