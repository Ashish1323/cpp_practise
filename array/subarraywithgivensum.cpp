#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 5;
    //cin >> n;
    int arr[n] = {1, 2, 3, 7, 5};
    int sum = 5;
    int p1 = 0;
    int p2 = 0;
    int currentSum = 0;
    while (currentSum != sum && p2 < n)
    {
        if (currentSum < sum)
        {
            currentSum += arr[p2++];
        }
        else
        {
            currentSum -= arr[p1++];
        }
    }
    cout << p1 + 1 << endl;
    cout << p2 + 1 << endl;
}
