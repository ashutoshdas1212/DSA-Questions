
TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    int ans=INT_MAX;
    if(root->data>x)
    {
        ans=root->data;
    }
    
    for(int i  =0  ; i <root->children.size()  ; i++)
    {
        ans = min(ans, getNextLargerElement(root->children[i],x));
    }
    return ans;
}