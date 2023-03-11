BinaryTreeNode<int> *lca(BinaryTreeNode<int> *root, int a, int b)
{
    if(!root)
    return NULL;
    
    if(root->data==a || root->data==b)
    {
        return root;
    }
    BinaryTreeNode<int> *leftlca;
    BinaryTreeNode<int> *rightlca;
     if (a < root->data)
    {
    leftlca=lca(root->left,a,b);
    }
    else if(a>root->data)
    {
    leftlca = lca(root->right, a, b);
    }
    if(b<root->data)
    {
    rightlca=lca(root->left,a,b);
    }
    else if(b>root->data)
    {
    rightlca = lca(root->right, a, b);
    }
    
    if(leftlca&&rightlca)
    {
        return root;
    }
    else if(leftlca)
    {
        return leftlca;
    }
    return rightlca;
    
}
    int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    BinaryTreenode<int> *x;
    x = lca(root, a, b);
    if (x)
    {
        return x->data;
    }
    return -1;
}