#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 6;
    //cin >> n;
    int arr[n] = {0, -9, 1, 3, -4, 5};
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    vector<int> vecta(maxx + 1);
    fill(vecta.begin(), vecta.end(), -1);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && vecta[arr[i]] == -1)
            vecta[arr[i]] = 1;
    }

    for (int i = 0; i < maxx + 1; i++)
    {
        if (vecta[i] != 1)
        {
            cout << i;
            break;
        }
    }
}
