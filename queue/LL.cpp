#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;
#define n 100

class node
{

public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Queue
{
    node *start;
    node *end;

public:
    Queue()
    {
        start = NULL;
        end = NULL;
    }
    void push(int x)
    {
        node *ni = new node(x);
        if (start == NULL)
        {
            start = ni;
            end = ni;
        }
        end->next = ni;
        end = ni;
    }
    void pop()
    {
        if (start == NULL)
        {
            return;
        }
        node *del = start;
        start = start->next;
        delete del;
    }
    int peek()
    {
        if (start == NULL)
        {
            return -1;
        }
        return start->data;
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    cout << q.peek() << endl;
}
