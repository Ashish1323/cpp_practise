#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int fact(int N)
{
    if (N == 1)
        return 1;
    return N * fact(N - 1);
}

int main()
{

    cout << fact(5);
}
