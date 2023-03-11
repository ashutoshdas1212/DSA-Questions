int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return 1 + length(head->next);
}
Node *deleteNodeRec(Node *head, int pos)
{
    if(head==NULL || pos>n || pos<0)
    return head;
    if(pos==0)
    return head->next;
    
    head->next=deleteNodeRec(head->next,pos-1);
    return head;
    
}