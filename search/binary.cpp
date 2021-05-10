#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int binarysearch(int arr[], int search, int start, int end)
{
    int mid = (start + end) / 2;
    if (search == arr[mid])
        return mid;
    else if (search > arr[mid])
        return binarysearch(arr, search, mid + 1, end);
    else
        return binarysearch(arr, search, start, mid - 1);
}

int binarysearchInter(int arr[], int search, int start, int end)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (search == arr[mid])
            return mid;
        else if (search > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}

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
    cout << "found at " << binarysearchInter(arr, search, 0, n - 1) + 1 << endl;
}
