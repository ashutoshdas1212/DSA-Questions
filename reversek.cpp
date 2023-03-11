Node *reversell(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt = head->next;
    Node *temp = head;
    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = nxt;
        if (nxt != NULL)
        {
            nxt = nxt->next;
        }
    }

    return prev;
}
Node *kReverse(Node *head, int k)
{
    Node *t1 = head;
    int i = 0;
    while (t1->next != NULL && i++ < k)
    {
        t1 = t1->next;
    }
    t1->next = NULL;
    Node *head1 = reversell(head);
    Node *temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=kReverse(head,k);
    
}