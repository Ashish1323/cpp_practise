#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 7;
    //cin >> n;
    int arr[n] = {1, 5, 3, 4, 3, 5, 6};
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    vector<int> vect(maxx + 1);
    fill(vect.begin(), vect.end(), -1);
    int mina = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (vect[arr[i]] != -1)
        {
            mina = min(mina, vect[arr[i]]); //used hashing
        }
        vect[arr[i]] = i;
    }
    cout << mina + 1;
}
