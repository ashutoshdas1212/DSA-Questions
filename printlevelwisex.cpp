void printLevelWise(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    q.push(NULL);
    while (!q.empty())
    {
        BinaryTreeNode<int> *x = q.front();
        q.pop();
        if (x != NULL)
        {
            cout << x->data;

            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        else
        {

            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}