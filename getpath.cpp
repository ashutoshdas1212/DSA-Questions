vector<int> *getPath(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == data)
    {
        vector<int> v;
        v.push_back(root->data);
        return v;
    }
    vector<int> lout=getPath(root->left,data);
    vector<int> rout=getPath(root->right,data);
    
    if(lout!=NULL)
    {
        lout.push_back(root->data);
        return lout;
    }
    if(rout!=NULL)
    {
        rout.push_back(root->data);
        return rout;
    }
    
}