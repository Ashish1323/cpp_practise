#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int first(int a[], int n, int i, int key)
{
    if (n == i) //  base condition
        return -1;
    if (a[i] == key)
        return i;
    return first(a, n, i + 1, key);
}

int last(int a[], int n, int i, int key)
{
    if (n == i) //  base condition
        return -1;
    int l = last(a, n, i + 1, key);
    if (l != -1)
        return l;
    if (a[i] == key)
        return i;
    return -1;
}

int main()
{
    int a[] = {1, 2, 5, 2, 5};
    cout << first(a, 5, 0, 2) + 1 << endl;
    cout << last(a, 5, 0, 2) + 1;
}
