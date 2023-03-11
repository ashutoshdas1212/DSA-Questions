int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return 1 + length(head->next);
}
Node *insertNode(Node *head, int i, int data)
{
    int n = length(head);
    if (head == NULL || pos > n || pos < 0)
        return head;
    if (i == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        return head;
    }

    head->next = insertNode(head->next, i - 1, data);
}