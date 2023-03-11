BinaryTreeNode<int> *construct(int *input, int n, int s, int e)
{
    if (n == 0)
        return NULL;

    int mid = (s + e) / 2;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[mid]);
    root->left = construct(input, n, s, mid - 1);
    root->right = construct(input, n, mid + 1, e);
    return root;
}
BinaryTreeNode<int> *constructTree(int *input, int n)
{
    construct(input, n, 0, n - 1);
}