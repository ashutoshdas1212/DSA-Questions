BinaryTreeNode<int> *treehelper(int *postorder, int *inorder, int postS, int postE, int inS, int inE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootdata=postorder[postE];
    int lpostS=postS;
    int rpostE=postE-1;
    int linS=inS;
    int rinE=inE;
    int rootindex=-1;
    for (int i = inS; i <= inE; i++)
    {
        if (inorder[i] == rootdata)
        {
            rootindex = i;
            break;
        }
    }
    int linE=rootindex-1;
    int rinS=rootindex+1;
    int rinE=inE;
    int lpostE=linE-linS + lpostS;
    int rpostS=rpostE-(rinE-rinS);
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    root->left=treehelper(postorder,inorder,lpostS,lpostE,linS,linE);
    root->right=treehelper(postorder,inorder,rpostS,rpostE,rinS,rinE);
    return root;
}

BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
  
    return treehelper(postorder, inorder, 0, postLength - 1, 0, inLength - 1);
}