Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return head;

    while (head->data == head->next->data)
       head=head->next;
    
        head->next = removeDuplicates(head->next);
    
}