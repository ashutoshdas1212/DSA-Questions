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
   while(head!=NULL)
   {
    cout<<head->data<<" ";
    head=head->next;
   } 
}
Node *takeInput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
           tail->next=newNode;
           
           tail=tail->next;
        }
        cin>>data;
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
Node *head=takeInput();
print(head);
    return 0;
}