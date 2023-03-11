void mirrorBinaryTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    BinaryTreeNode<int> *lnode = root->left;
    BinaryTreeNode<int> *rnode = root->right;
    root->left=rnode;
    root->right=lnode;
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
}