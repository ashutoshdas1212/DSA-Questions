class bst
{
    int minimum;
    int maximum;
    bool isbst;
};

bst check(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        bst output;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
 bst leftoutput=check(root->left);
 bst rightoutput=check(root->right);
 int minimum=min(root->data,min(leftoutput.minimum,rightoutput.minimum));
 int maximum=max(root->data,max(leftoutput.maximum,rightoutput.maximum));
 bool isbstfinal=leftoutput.isbst && rightoutput.isbst && root->data>leftoutput.maximum && root->data<rightoutput.minimum;
 
    bst output;
    output.minimum=minimum;
    output.maximum=maximum;
    output.isbst=isbstfinal;
    retrun output;
}

bool isBST(BinaryTreeNode<int> *root)
{
    bst output = check(root);
    return output.isbst;
}