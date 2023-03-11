Node<int> *constructr(BinaryTreeNode<int> *root, Node<int> *head)
{
    if (root == NULL)
        return NULL;
    Node<int> *temp = NULL;
    Node<int> *rhead = NULL;
    if (root->left != NULL)
    {
        Node<int> *lhead = constructr(root->left, head);
    }
    Node<int> *newnode = new Node<int>(root->data);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node<int> *temp = head;
        if (temp != NULL)
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    if (root->right != NULL)
    {
        Node<int> *rhead = constructr(root->right, NULL);
    }
    if (rhead != NULL)
    {
        newnode->next = rhead;
    }

    return head;
}
Node<int> *constructl(BinaryTreeNode<int> *root, Node<int> *head)
{
    if (root == NULL)
        return NULL;
    Node<int> *temp = NULL;
    Node<int> *rhead = NULL;
    if (root->left != NULL)
    {
        Node<int> *lhead = constructl(root->left, head);
    }
    Node<int> *newnode = new Node<int>(root->data);
    if (lhead == NULL)
    {
        head = newnode;
    }
    else
    {
        Node<int> *temp = lhead;
        if (temp != NULL)
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    if (root->right != NULL)
    {
        Node<int> *rhead = constructl(root->right, NULL);
    }
    if (rhead != NULL)
    {
        newnode->next = rhead;
    }

    return head;
}
Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node<int> *newnode = new Node<int>(root->data);
    Node<int> *lhead = constructl(root->left, NULL);
    Node<int> *temp = lhead;
    if (temp != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    Node<int> *rhead = constructr(root->right, NULL);
    newnode->next = rhead;
    return newnode;
}