void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        if (front != NULL)
        {
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);

            if (front->left != NULL && front->right == NULL)
            {
                cout << front->left->data << " ";
            }
            if (front->left == NULL && front->right != NULL)
            {
                cout << front->right->data << " ";
            }
        }
    }
}