#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;
#define n 100

class Queue
{
    int *arr;
    int first;
    int end;

public:
    Queue()
    {
        arr = new int[n];
        first = -1;
        end = -1;
    }
    void push(int x)
    {
        if (end == n - 1)
        {
            cout << "end of the queue!";
        }
        end++;
        arr[end] = x;
        if (first == -1)
        {
            first++;
        }
    }
    void pop()
    {
        if (first == -1 || first > end)
        {
            cout << "TMKC";
        }
        first++;
    }
    int peek()
    {
        if (first == -1 || first > end)
        {
            cout << "TMKC";
        }
        return arr[first];
    }

    void empty()
    {
        if (first == -1 && end == -1)
        {
            cout << "YAY";
        }
    }
};

int main()
{
    Queue q;

    q.empty();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
}
