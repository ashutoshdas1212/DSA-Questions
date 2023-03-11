/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/
int length(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
Node *deleteNode(Node *head, int pos)
{
    int n=length(head);
    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    if(pos>n)
    {
        return head;
    }
    Node *temp = head;
    int c = 0;
    while (temp != NULL && c <= i - 2)
    {
        temp = temp->next;
        c++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
    }
    
    return head;
}
