bool check(BinaryTreeNode<int> *root, int x)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    return check(root->left, x) || check(root->right, x);
}

int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == a && a == b)
    {
        return root->data;
    }
    else if (root->data == a)
    {
        if (check(root->left, b) || check(root->right, b))
        {
            return root->data;
        }
        else
        {
            return -1;
        }
    }
    else if (root->data == b)
    {
        if (a<root->data )
        {
            if(check(root>left,a))
            {
                return root->data;
            }
            else
            {
                return -1;
            }
            
        }
        if (a > root->data)
        {
            if (check(root > right, a))
            {
                return root->data;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int x = getLCA(root->left, a, b);
        int y = getLCA(root->right, a, b);
        if (check(root->left, a) && check(root->right, b) || check(root->left, b) && check(root->right, a))
        {
            return root->data;
        }

        else if (x != -1)
            return x;
        else if (y != -1)
            return y;
        else
        {
            return -1;
        }
    }
}