#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int knapsack(int res[], int W[], int Wt, int n)
{
    if (Wt == 0 || n == 0)
        return 0;
    if (W[n - 1] > Wt)
        return knapsack(res, W, Wt, n - 1);
    return max(knapsack(res, W, Wt, n - 1), knapsack(res, W, Wt - W[n - 1], n - 1) + res[n - 1]);
}

int main()
{
    int res[] = {100, 50, 150};
    int W[] = {1, 2, 3};
    cout << knapsack(res, W, 5, 3);
}
