#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

void dec(int N)
{
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << N << endl;
    dec(N - 1);
}

void inc(int N)
{
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }
    inc(N - 1);
    cout << N << endl;
}

int main()
{

    dec(5);
    inc(5);
}
