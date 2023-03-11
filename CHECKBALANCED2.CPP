

pair<int, bool> bt(BinaryTreeNode<int> *root)
{
    pair<int,bool> p;
    p.first=INT_MIN;
    p.second=true;
    if(root==NULL)
    {
        return p;
    }
    
    pair<int, bool> lp=bt(root->left);
    pair<int, bool> rp=bt(root->right);
    p.first=1+max(lp.first,rp.first);
    p.second=lp.second && rp.second;
    return p;
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    pair<int,bool> p=bt(root);
    return p.second;
}