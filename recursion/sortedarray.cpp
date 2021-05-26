#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

bool sorted(int a[], int i, int n)
{
    if (n == 1)
        return true;
    return (a[i] < a[i + 1] && sorted(a, i + 1, n - 1));
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << sorted(a, 0, 5);
}
