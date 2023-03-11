int length(Node *head)
{
    if (head == NULL)
        return 0;

    return 1 + length(head->next);
}
Node *bubbleSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    for (int i = 0; i < length(head); i++)
    {
        Node *curr = head;
        Node *prev = NULL;
        while (curr->next != NULL)
        {
            if (curr->data > curr->next->data)
            {
                if (prev != NULL)
                {
                    Node *temp = curr->next->next;
                    prev->next = curr->next;
                    curr->next->next = curr;
                    curr->next = temp;
                    prev=prev->next;
                }
                else
                {
                    Node *temp = curr->next->next;
                    head = curr->next;
                    head->next = curr;
                    curr->next = temp;
                    prev=head;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
    return head;
}