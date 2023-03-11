int depth(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return -1;
    }
    else if (root->data == x)
    {
        return 0;
    }
    int left = depth(root->left, x);
    if (left != -1)
    {
        return 1 + left;
    }
    else
    {
        int right = depth(root->right, x);
        if (right != -1)
        {
            return 1 + right;
        }
        else
        {
            return -1;
        }
    }
}
bool isSibling(BinaryTreeNode<int> *root, int p, int q)
{

    if (root->left == NULL && root->right == NULL)
    {
        return false;
    }
    else if (root->left != NULL && root->right != NULL)
    {
        if (root->left->data == p && root->right->data == q)
        {
            return true;
        }
        else if (root->left->data == q && root->right->data == p)
        {
            return true;
        }
        else
        {
            return isSibling(root->left, p, q) || isSibling(root->right, p, q);
        }
    }
    else
    {
        if(root->left!=NULL)
        {
            return isSibling(root->left,p,q);
        }
        else if(root->right!=NULL)
        {
            return isSibling(root->right,p,q);
        }
    }
    
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q)
{
    if (root == NULL)
    {
        return false;
    }

    return !isSibiling(root,p,q) && depth(root, p)==depth(root,q);
}