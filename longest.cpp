#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 7;
    //cin >> n;
    int arr[n] = {10, 7, 4, 6, 8, 10, 11};

    int d = arr[1] - arr[0];
    int ans = 0;
    int count = 2;
    for (int i = 2; i < n; i++)
    {
        if ((arr[i] - arr[i - 1]) == d)
        {
            count++;
        }
        else
        {
            d = arr[i] - arr[i - 1];
            count = 2;
        }
        ans = max(ans, count);
    }
    cout << ans;
}
