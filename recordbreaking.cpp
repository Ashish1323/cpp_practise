#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 8;
    //cin >> n;
    int arr[n] = {1, 2, 0, 7, 2, 0, 2, 2};
    int maxi = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi && arr[i] > arr[i + 1])
        {
            count++;
        }
        maxi = max(arr[i], maxi);
    }
    cout << count;
}
