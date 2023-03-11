void insertDuplicateNode(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return;
    }
    if (root->data != root->left->data)
    {
        BinaryTreeNode<int> *lnode = new BinaryTreeNode<int>(root->data);
        BinaryTreeNode<int> *prevlnode = root->left;
        root->left = lnode;
        lnode->left = prevlnode;
    }
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);
    
}