#include <bits/stdc++.h>
Node *swapll(Node *head, int x, int y)
{
    int i = min(x, y);
    int j = max(x, y);
    if (head == NULL || head->next == NULL || x == y || x < 0 || y < 0)
    {
        return head;
    }

    int x1 = 0;
    int x2 = 0;
    Node *t1 = head, *t2 = head;
    Node *prev1 = NULL, *prev2 = NULL;
    while (x1++ < i)
    {
        prev1 = t1;
        t1 = t1->next;
    }

    while (x2++ < j)
    {
        prev2 = t2;
        t2 = t2->next;
    }
    Node *next2 = t2->next;

    if (prev1 != NULL)
    {
        prev1->next = t2;
    }
    else
    {
        head = t2;
    }

    if (prev2 != NULL)
    {
        prev2->next = t1;
    }
    else
    {
        head = t1;
    }

    t2->next = t1->next; // not prev2
    t1->next = next2;

    return head;
}
int length(Node *head)
{
    if(head==NULL)
    return 0;
    
    return 1+length(head->next);
}
Node *bubbleSort(Node *head)
{
    if(head==NULL)
    return head;
    int n=length(head);
    for(int i  = 0 ; i <n  ; i++)
    {
        Node *temp=head;
        for (int j = 0; j < n-i-1; j++)
        {
            if(temp->data>temp->next->data)
            {
                head=swappll(head,j,j+1);
            }
            temp=temp->next;
        }
    }
    return head;
}