#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeinputlevelwise()
{   int rootdata;
    cout << "Enter root data\n";
    cin >> rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    
    queue<TreeNode<int>*> q;

    q.push(root);
    while (!q.empty())
    {
        TreeNode<int>* front = q.front();
        q.pop();
        cout << "Enter number of children of" << front->data << endl;
        int numchild;
        cin >> numchild;
        for (int i = 0; i < numchild; i++)
        {
            int childdata;
            cout << "Enter " << i << "child of " << front->data << " \n";
            cin >> childdata;
            TreeNode<int>* child = new TreeNode<int>(childdata);
            q.push(child);
            front->children.push_back(child);
        }
    }
    return root;
}
void printTree(TreeNode<int>* root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>* root = takeinputlevelwise();
    printTree(root);
}
