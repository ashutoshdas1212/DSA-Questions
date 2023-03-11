int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return 1 + length(head->next);
}
Node *appendLastNToFirst(Node *head, int n)
{
    if (head == NULL || n == 0)
        return head;

    int len = length(head);
    int x = len - n;
    int i = 0;
    Node *temp = head;
    Node *tail = head;
    while (i++ < x)
    {
        temp = temp->next;
    }
    Node *prev = NULL;
    while (tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
    tail->next = head;
    prev->next = NULL;

    return temp;
}