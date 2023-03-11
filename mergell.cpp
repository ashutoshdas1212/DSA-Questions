Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if (head1 == NULL && head2 == null)
        return NULL;
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    Node *newhead = NULL;
    Node *t1 = head1;
    Node *t2 = head2;
    Node *temp=NULL;
    while (t1->next != NULL && t2->next != NULL)
    {
        if (newhead == NULL)
        {
            if (t1->data < t2->data)
            {
                newhead = head1;
                t1 = t1->next;
                temp=newhead;
            }
            else
            {
                newhead = head2;
                t2 = t2->next;
                temp=newhead;
            }
        }
        else
        {
            if (t1->data < t2->data)
            {
                temp->next=t1;
                temp=temp->next;
                t1=t1->next;
            }
            else
            {
                temp->next = t2;
                temp = temp->next;
                t2 = t2->next;
            }
        }
    }
    while(t1->next!=NULL)
    {
        temp->next=t1;
        t1 = t1->next;
        temp = temp->next;
    }
    while (t2->next != NULL)
    {
        temp->next = t2;
        t2 = t2->next;
        temp = temp->next;
    }
    return newhead;
}