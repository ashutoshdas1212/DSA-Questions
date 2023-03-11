#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void zigZagOrder(BinaryTreeNode<int> *root)
{
    stack<BinaryTreeNode<int> *> s1;
    stack<BinaryTreeNode<int> *> s2;

    s1.push(root);
    int i = 1;
    while (!s1.empty() || !s2.empty())
    {
        if (i % 2 != 0)
        {
            while (!s1.empty())
            {
                BinaryTreeNode<int> *top = s1.top();
                cout << top->data << " ";
                s1.pop();
                if (top->left != NULL)
                    s2.push(top->left);
                if (top->right != NULL)
                    s2.push(top->right);
            }
            cout << endl;
        }
        else
        {
            while (!s2.empty())
            {
                BinaryTreeNode<int> *top = s2.top();
                cout << top->data << " ";
                s2.pop();
                if (top->right != NULL)
                    s1.push(top->right);
                if (top->left != NULL)
                    s1.push(top->left);
            }
            cout << endl;
        }
        i++;
    }
}