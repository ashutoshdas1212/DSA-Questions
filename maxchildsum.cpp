
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
TreeNode<int>* larger(TreeNode<int>* root, TreeNode<int>* mxnode)
{
    if(root->children.size()==0)
    {
        TreeNode<int>* node=new TreeNode<int>(root->data);
        return node;
    }
    int ans = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += root->children[i]->data;
    }
        int ansmx=mxnode->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ansmx += mxnode->children[i]->data;
    }

    int mx = ans;
    for (int i = 0; i < root->children.size(); i++)
    {
        mx = max(mx, larger(root->children[i], mxnode)->data);
    }
    if (mx == ans)
    {
        mxnode = root;
    }
    else
    {
        for (int i = 0; i < root->children.size(); i++)
        {
            if(mx==root->children[i]->data)
            {
                mxnode=larger(root->children[i],mxnode);
            }
        }
    }
    
    return mxnode;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root)
{
    TreeNode<int>* mxnode = new TreeNode<int>(root->data);
    return larger(root, mxnode);
}