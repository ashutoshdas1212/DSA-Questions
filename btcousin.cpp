#include <bits/stdc++.h>
#include <iostream>
using namespace std;

unordered_map<char, int> mp;
bool cousin(BinaryTreeNode<int> *root, int p, int q, int depth)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->left != NULL)
    {
        if (root->left->data == p || root->left->data == q)
        {
            if (root->left->data == p)
            {
                mp['p'] = depth + 1;
            }
            if (root->left->data == q)
            {
                mp['q'] = depth + 1;
            }

            if (root->right->data == p || root->right->data == q)
            {
                return false;
            }
            else
            {
                return true;
            }
            
        }
    }
    if (root->right != NULL)
    {
        if (root->right->data == p || root->right->data == q)
        {
            if (root->right->data == p)
            {
                mp['p'] = depth + 1;
            }
            if (root->right->data == q)
            {
                mp['q'] = depth + 1;
            }
            if (root->right->data == p || root->right->data == q)
            {
                return false;
            }
            else
            {
                return true;
            }
            
        }
    }
 return cousin(root->left,p,q,depth+1) || cousin(root->right,p,q,depth+1)  ; 
}

    bool isCousin(BinaryTreeNode<int> * root, int p, int q)
    {

        bool flag=cousin(root, p, q, 0);
        if (mp['p'] == mp['q'] && flag)
        {
            return true;
        }
        return false;
    }