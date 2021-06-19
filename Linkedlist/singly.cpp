#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtEnd(node *&head, int val)
{
    node *tail = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = tail;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;
}

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

void deleteAtStart(node *&head)
{
    head = head->next;
}
void deleteAtEnd(node *&head)
{
    node *temp = head;
    node *prev = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    // cout << prev->data << endl;
    // cout << temp->data;
    prev->next = NULL;
}

void Deletefrommiddle(node *&head, int val)
{
    node *temp = head;
    node *prev = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
        if (temp->data == val)
            break;
    }
    // cout << prev->data << endl;
    // cout << temp->data;
    prev->next = temp->next;
}

node *reverse(node *head)
{
    node *prev = NULL;
    node *temp = head;
    while (temp != NULL)
    {
        node *nexta = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nexta;
    }
    return prev;
}

int main()
{
    node *head = NULL;
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtHead(head, 5);
    deleteAtStart(head);
    //deleteAtEnd(head);
    Deletefrommiddle(head, 3);
    display(head);
    node *rev = reverse(head);
    display(rev);
    //cout << search(head, 5);
}
