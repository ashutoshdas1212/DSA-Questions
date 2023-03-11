Node *reverse(Node *curr,Node *prev)
{
    if(curr==NULL )
    {
        return prev;
    }
    Node *a=curr->next;
    curr->next=prev;
    
    return reverse(a,curr);
}

Node *reverseLinkedListRec(Node *head)
{
  if(head==NULL || head->next==NULL)
  return head;
  
  return reverse(head,NULL);
}