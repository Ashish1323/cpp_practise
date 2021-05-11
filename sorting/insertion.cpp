#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 5;
    //cin >> n;
    int arr[n] = {9, 5, 1, 4, 3};

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
