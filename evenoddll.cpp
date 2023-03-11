#include <iostream>

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

using namespace std;

Node *evenAfterOdd(Node *head)
{
  if (head == NULL)
    return head;

  Node *temp = head;
  Node *nh1 = NULL;
  Node *nh2 = NULL;
  Node *t1;
  Node *t2;
  while (temp != NULL)
  {
    if (temp->data % 2 != 0)
    {
      if (nh1 == NULL)
      {
       // cout<<"odd head"<<" ";
        Node *newNode = new Node(temp->data);
        nh1 = newNode;
        t1 = newNode;
        temp=temp->next;
      }
      else
      {
      //  cout << "odd"<< " ";
        Node *newNode = new Node(temp->data);
        t1->next = newNode;
        t1 = t1->next;
        temp = temp->next;
      }
    }
    else
    {
      if (nh2 == NULL)
      {
      //  cout << "even head"<< " ";
        Node *newNode = new Node(temp->data);
        nh2 = newNode;
        t2 = newNode;
        temp = temp->next;
      }
      else
      {
      //  cout << "even "<< " ";
        Node *newNode = new Node(temp->data);
        t2->next = newNode;
        t2 = t2->next;
        temp = temp->next;
      }
    }
  }
t1->next=nh2;
return nh11;
}




Node *takeinput()
{
  int data;
  cin >> data;
  Node *head = NULL, *tail = NULL;
  while (data != -1)
  {
    Node *newnode = new Node(data);
    if (head == NULL)
    {
      head = newnode;
      tail = newnode;
    }
    else
    {
      tail->next = newnode;
      tail = newnode;
    }
    cin >> data;
  }
  return head;
}

void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Node *head = takeinput();
    head = evenAfterOdd(head);
    print(head);
  }
  return 0;
}