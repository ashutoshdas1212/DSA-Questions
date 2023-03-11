TreeNode<int> *remove(TreeNode<int>* root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        root->children[i] = removeLeafNode(root->children[i]);
    }
    return root;
}
TreeNode<int> *removeLeafNodes(TreeNode<int> *root)
{
     root=remove(root);
     return root;
}
