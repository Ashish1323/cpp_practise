#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int power(int N, int p)
{
    if (p == 0)
        return 1;
    return N * power(N, p - 1);
}

int main()
{

    cout << power(5, 3);
}
