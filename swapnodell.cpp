Node *swapNodes(Node *head, int i, int j)
{
    if(head==NULL || head->next==NULL || i==j)
    {
        return head;
    }
    int x1 = 0;
    int x2 = 0;
    Node *t1 = head, *t2 = head;
    while (x1++ < i)
    {
        t1 = t1->next;
    }
    while (x2++ < j)
    {
        t2 = t2->next;
    }

    Node *temp = head, *nh = NULL, *t = head;
    int pos = 0;
    while (temp != NULL)
    {
        if (pos == i)
        {
            Node *newNode = new Node(t2->data);
            if (nh == NULL)
            {

                t = newNode;
                temp=temp->next;
            }
            else
            {
                t->next = newNode;
                t = t->next;
                temp = temp->next;
            }
        }
        else if (pos == j)
        {
            Node *newNode = new Node(t1->data);
            if (nh == NULL)
            {
                t = newNode;
                temp = temp->next;
            }
            else
            {
                t->next = newNode;
                t = t->next;
                temp = temp->next;
            }
        }
        else
        {
            Node *newNode = new Node(temp->data);
            if (nh == NULL)
            {
                nh = newNode;
                t = newNode;
                temp = temp->next;
            }
            else
            {
                t->next = newNode;
                t = t->next;
                temp = temp->next;
            }
        }
        pos++;
    }
    return nh;
}