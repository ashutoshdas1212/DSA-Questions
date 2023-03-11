
TreeNode<int> *getlargest(TreeNode<int> *root)
{
    int mx = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        mx = max(mx, (getlargest(root->children[i]))->data);
    }
    TreeNode<int> *node = new TreeNode<int>(mx);

    return node;
}

TreeNode<int> *second(TreeNode<int> *root, int num)
{
    int ans = INT_MIN;
    if (root->data < num)
    {
        ans = root->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = max(ans, second(root->children[i], num)->data);
    }
    TreeNode<int> *node = new TreeNode<int>(ans);

    return node;
}
}
TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
    TreeNode<int> *largestnode = getlargest(root);

    int num = largestnode->data;
    return second(root, num);
}