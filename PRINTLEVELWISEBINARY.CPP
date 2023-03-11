void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        if(front!=NULL)
        cout << front->data << ":";
        else
        {
            cout<<"\n";
        }
        
        
        if (front->left != NULL)
        {
            cout << "L:" << front->left->data;
            q.push(front->left);
        }
        else
        {
            cout << "L:-1";
        }
        if (front->right != NULL)
        {
            cout << ":R:" << front->right->data;
            q.push(front->right);
        }
        else
        {
            cout << ":R:-1";
        }
    }
}