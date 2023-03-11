
int length(Node *head)
{
    if (head == NULL)
        return 0;

    1 + length(head->next);
}
Node *attachhead(Node *head)
{
    Node *newNode = new Node(1);
    newNode->next = head;
    head = newNode;
    Node *temp = head->next;
    while (temp != NULL)
    {
        temp->data = 0;
        temp = temp->next;
    }
    return head;
}
Node *nextnum(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    int len = length(head);
    int count = 0;
    while (head != NULL)
    {
        if (head->data == 9)
        {
            count++;
        }
        if (head->next == NULL)
        {

            if (count == len)
            {
                head->data++;
            }
            else
            {
                head = attachhead(head);
            }
        }
    }
    return head;
}

Node *NextLargeNumber(Node *head)
{

    return nextnum(head);
}
