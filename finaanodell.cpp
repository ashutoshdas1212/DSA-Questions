int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return 1 + length(head->next);
}
int find(Node *head, int data, int i)
{
    int n = length(head);
    if (head == NULL || i > n)
        return -1;

    if (head->data == data)
        return i;

    return find(head->next, data, i + 1);
}
int findNode(Node *head, int data)
{

    find(head, data, 0);
}