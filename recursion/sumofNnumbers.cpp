#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int SumN(int N)
{
    if (N == 1)
        return 1;
    return N + SumN(N - 1);
}

int main()
{

    cout << SumN(5);
}
