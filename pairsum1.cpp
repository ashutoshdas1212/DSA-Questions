int num(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + num(root->left) + num(root->right);
}
void sum(BinaryTreeNode<int> *root, int sum, vector<int> v)
{
    if (root == NULL)
    {
        return;
    }
    v.push(root->data);
    sum(root->left, sum, v);
    sum(root->right, sum, v);
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
    sum(root, sum, v);
    int n = num(root);
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] + v[j] < sum)
        {
            i++;
        }
        else if (v[i] + v[j] > sum)
        {
            j++;
        }
        else
        {
            cout << v[i] << " " << v[j];
        }
        cout << endl;
    }
}