vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    if (root != NULL)
    {
        q.push(root);
        q.push(NULL);
    }
    Node<int> *newNode=new Node<int>(root->data);
    vector<Node<int> *> v;
    Node<int> *head = newNode;;
    Node<int> *tail = newNode;
    q.pop();
    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        Node *newNode = new Node(front->data);
        if (front != NULL)
        {
            tail->next = newNode;
            tail = tail->next;
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);
        }
        else
        {
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
                v.push(head);
                Node *newNode = new Node(q.front()->data);
                head = newNode;
                tail = newNode;
                q.pop();
            }
        }
    }
    return v;
}