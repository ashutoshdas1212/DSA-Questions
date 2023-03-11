Node *skipMdeleteN(Node *head, int m, int n)
{
    if (head == NULL || (m == 0 && n == 0))
        return head;
    if (m == 0)
    {
        return NULL;
    }
    if (n == 0)
    {
        return head;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        Node *curr = temp;
        Node *t = NULL;

        int i = 0;
        while (i++ < m - 1)
        {

            curr = curr->next;
            temp = temp->next;
            if (curr == NULL)
            {
                return head;
            }
        }
        t = curr->next;
        temp = temp->next;
        int x = 0;
        while (x++ < n)
        {

            t = t->next;
            temp = temp->next;
            if (t == NULL)
            {
                return head;
            }
        }
        curr->next = t;
    }
    return head;
}