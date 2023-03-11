

void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *front = q.front();
        q.pop();
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << ",";
            q.push(root->children[i]);
        }
    }
}