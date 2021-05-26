#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int get(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}

int uniqueNumber2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int t = xorsum;

    int pos = 0;
    int setbit = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (get(arr[i], pos - 1))
        {
            ans1 ^= arr[i];
        }
    }
    int ans2 = ans1 ^ t;
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 5, 7, 3, 2, 1};
    cout << uniqueNumber2(a, 8) << endl;
}

// #include <iostream>
// using namespace std;
// int setBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// void unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }
//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(arr[i], pos - 1))
//         {
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout << newxor << endl;
//     cout << (tempxor ^ newxor) << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
//     unique(arr, 8);
//     return 0;
// }