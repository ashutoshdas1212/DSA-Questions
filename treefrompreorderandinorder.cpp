BinaryTreeNode<int> *treehelper(int *preorder, int *inorder, int preS, int preE, int inS, int inE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootindex = -1;
    int rootdata = preorder[preS];//not 0
    for (int i = inS; i <= inE; i++)
    {
        if (inorder[i] == rootdata)
        {
            rootindex = i;
            break;
        }
    }
    int lpreS = preS + 1;
    int rpreE = preE;
    int linS = inS;
    int linE = rootindex - 1;
    int rinS = rootindex + 1;
    int rinE = inE;
    int lpreE = linE - linS + lpreS;
    int rpreS = rpreE - (rinE - rinS);

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
    root->left=treehelper(preorder,inorder,lpreS,lpre,linS,linE);
    root->right = treehelper(preorder, inorder, rpreS, rpre, rinS, rinE);
    return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    int preS = 0;
    int preE = preLength - 1;
    int inS = 0;
    int inE = inLength - 1;
    return treehelper(preorder, inorder, preS, preE, inS, inE);
}