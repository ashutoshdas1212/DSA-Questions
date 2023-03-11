void sum(BinaryTreeNode<int>* root,int sum, vector<int> v)
{
    if(sum==0)
    {
        for(int i  =0  ; i <v.size()  ; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    v.push_back(root->data);
    sum(root->left,sum-root->data,v);
    sum(root->right,sum-root->data,v);
}
void pairSum(BinaryTreeNode<int> *root, int sum)
{
    vector<int> v;
    sum(root,sum,v);
}