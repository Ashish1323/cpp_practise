#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int fibo(int N)
{
    if (N < 2)
        return 1;
    return fibo(N - 2) + fibo(N - 1);
}

int main()
{

    cout << fibo(25);
}
