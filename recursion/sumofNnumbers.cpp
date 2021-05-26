#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int SumN(int N)
{
    if (N == 0)
        return 0;
    return N + SumN(N - 1);
}

int main()
{

    cout << SumN(4);
}
