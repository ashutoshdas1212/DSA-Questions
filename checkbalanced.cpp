int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }
    int hl = height(root->left);
    int hr = height(root->right);
    bool valid = true;
    if (abs(hl - hr) > 1)
    { // FORGOT ABS
        valid = false;
    }
    bool v1 = isBalanced(root->left);
    bool v2 = isBalanced(root->right);
    return valid && v1 && v2;
}