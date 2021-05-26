#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int uniqueNumber(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}

int main()
{
    int a[] = {1, 2, 3, 5, 3, 2, 1};
    cout << uniqueNumber(a, 7) << endl;
}
