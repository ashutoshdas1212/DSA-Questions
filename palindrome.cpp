
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

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
Node *head1 = NULL;
Node *reverse(Node *head)
{
    while (head->next != NULL)
    {

        Node *newNode = new Node(head->data);
        if (head1 == NULL)
        {
            head1 = newNode;
        }
        else
        {
            head = head->next;
            Node *newNode = new Node(head->data);
            newNode->next = head1;
            head1 = newNode;
        }
    }
    return head1;
}
int length(Node *head)
{
    if (head == NULL)
        return 0;

    return 1 + length(head->next);
}
bool isPalindrome(Node *head)
{
    int len = length(head);
    Node *reversehead = reverse(head);
    int x = len / 2;
    int i = 0;
    Node *t1 = head, *t2 = reversehead;
    while (i++ < x)
    {
        if (t1->data != t2->data)
            return false;
            t1=t1->next;
            t2=t2->next;
    }
    return true;
}

int main()
{

    Node *head = takeinput();
  //  Node *reversehead = reverse(head);
   // print(reversehead);
    bool ans = isPalindrome(head);

    if (ans)
        cout << "true";
    else
        cout << "false";

    cout << endl;

    return 0;
}