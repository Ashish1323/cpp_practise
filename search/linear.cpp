#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;
    cin >> search;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "found element!!";
            break;
        }
    }

    if (i == n)
        cout << "not found in array!!";
}
