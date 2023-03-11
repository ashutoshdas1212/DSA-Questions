Node<int> *construct(BinaryTreeNode<int> *root, Node<int> *head, Node<int> *tail)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left != NULL)
    {
        Node<int> *head = construct(root->left, head, tail);
    }
    Node<int> *newnode = new Node<int>(root->data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node<int> *temp = head;
       while(temp->next!=NULL)
       {
        temp=temp->next;

    tail->next = construct(root->right, head, tail);

    return head;
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node<int> *lhead = NULL;
    if (root->left != NULL)
        Node<int> *lhead = construct(root->left, NULL, NULL);

    Node<int> *temp = lhead;
    if (temp != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    Node<int> *newnode = new Node<int>(root->data);
    if (temp != NULL)
    {
        temp->next = newnode;
    }
    Node<int> *rhead;
    if (root->right != NULL)
    {
        rhead = construct(root->right, NULL, NULL);

        newnode->next = rhead;
    }
    return newnode;
}