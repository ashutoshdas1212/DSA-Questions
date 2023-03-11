class pairs
{
    Node<int> *head;
    Node<int> *tail;
};

pairs construct(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        pairs output;
        output.head = NULL;
        output.tail = NULL;
        return output;
    }
    pairs lout = construct(root->left);
    pairs rout = construct(root->right);
    pairs b;
    Node<int> *n = new Node<int>(root->data);
    if (lout.tail != NULL)
    {
        lout.tail->next = n;
    }
    n->next = rout.head;
    if (lout.head != NULL)
    {
        b.head = lout.head;
    }
    else
    {
        b.head = n;
    }
    if (rout.head != NULL)
    {
        b.tail = rout.tail;
    }
    else
    {

        b.tail = n;
    }

    return b;
}
Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    pairs b = construct(root);
    return b.head;
}
