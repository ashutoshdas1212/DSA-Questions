vector<int> *longestPath(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if(!root->right && !root->left)
    {
        vector<int> *output=new vector<int>();
        output->push_back(root->data);
        return output;
        
    }
     vector<int>* leftans=longestPath(root->left);
     vector<int>* rightans=longestPath(root->right);
     
     if(!leftans)
     {
        rightans->push_back(root->data)
        return rightans;
     }
     else if(!rightans)
     {
        leftans->push_back(root->data)
        return leftans;
     }
     else
     {
        if(rightans->size()>leftans->size())
        {
            rightans->push_back(root->data);
            return rightans;
        }
        else
        {
            leftans->push_back(root->data);
            return leftans;
        }
        
     }
     
}