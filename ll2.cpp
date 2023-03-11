#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

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
Node *insert(Node *head)
{
    int i;
    cin >> i;
    int data;
    cin>>data;
   
    int n=length(head);
    Node *newNode=new Node(data);
    Node *temp=head;
    if(i==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    if(i>n)
    {
        return head;
    }
    
    int c=0;
    while(temp!=NULL && c<=i-2)
    {
        temp=temp->next;
        c++;
    }
    if(temp!=NULL)
    {
        Node *a=temp;
        Node *b=temp->next;
        a->next=newNode;
        newNode->next=b;
    }
    return head;
}
Node *delete(Node *head)
{
    
}

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;

            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //     Node n1(1);
    //     Node *head = &n1;
    //     Node n2(2);
    //     n1.next = &n2;
    //    //cout<<n1.data<<" ";
    // print(head);
    Node *head = takeInput();
    print(head);
    Node *temp=insert(head);
    print(temp);
    return 0;
}